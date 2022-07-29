import os
import subprocess

import colorama
from termcolor import cprint

import config

colorama.init()

# Compilation

cprint("Compiling solution...", "blue")
os.system(f"{config.COMPILER_PATH} {config.PROJECT_DIRECTORY_PATH + config.SOLUTION_PATH} -o solve.exe "
          f"{config.SOLUTION_COMPILER_FLAGS}")
cprint("Solution compilation finished", "green")

if config.USE_CHECKER_INSTEAD_OF_STUPID:
    cprint("Compiling checker...", "blue")
    os.system(f"{config.COMPILER_PATH} {config.PROJECT_DIRECTORY_PATH + config.CHECKER_PATH} -o check.exe")
    cprint("Checker compilation finished", "green")
else:
    cprint("Compiling stupid...", "blue")
    os.system(f"{config.COMPILER_PATH} {config.PROJECT_DIRECTORY_PATH + config.STUPID_PATH} -o stupid.exe")
    cprint("Stupid compilation finished", "green")

cprint("Compiling generator...", "blue")
os.system(f"{config.COMPILER_PATH} {config.PROJECT_DIRECTORY_PATH + config.GEN_PATH} -o gen.exe")
cprint("Generator compilation finished", "green")

print()

# Testing

counter = 1
while True:

    input_data = subprocess.run("gen.exe", capture_output=True).stdout
    output_data = subprocess.run("solve.exe", input=input_data, capture_output=True).stdout

    if config.USE_CHECKER_INSTEAD_OF_STUPID:
        res = subprocess.run("check.exe", input=input_data + b'\n' + output_data, capture_output=True).stdout.decode(
            "utf-8")

        if res[0] == '0':
            cprint(f"Test {counter} failed:", "red")

            cprint("Input:", "blue")
            cprint(input_data.decode("utf-8"), "yellow")

            cprint("Solution output:", "blue")
            cprint(output_data.decode("utf-8"), "yellow")

            cprint("Checker verdict:", "blue")
            cprint(res[1:], "yellow")
            break
    else:
        res = subprocess.run("stupid.exe", input=input_data, capture_output=True).stdout

        if output_data != res:
            cprint(f"Test {counter} failed:", "red")

            cprint("Input:", "blue")
            cprint(input_data.decode("utf-8"), "yellow")

            cprint("Solution output:", "blue")
            cprint(output_data.decode("utf-8"), "yellow")

            cprint("Stupid output:", "blue")
            cprint(res.decode("utf-8"), "yellow")
            break

    if config.PRINT_PASSED_TESTS:
        cprint(f"Test {counter} passed:", "green")
        cprint(input_data.decode("utf-8"), "yellow")
        print()
    else:
        cprint(f"Test {counter} passed", "green")

    counter += 1
