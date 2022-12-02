# Libraries

import os
from termcolor import cprint

from config_checker import *


def neutral(text="", end="\n"):
    cprint(text, "white", end=end)


def info(text="", end="\n"):
    cprint(text, "blue", end=end)


def success(text="", end="\n"):
    cprint(text, "green", end=end)


def warning(text="", end="\n"):
    cprint(text, "yellow", end=end)


def error(text="", end="\n"):
    cprint(text, "red", end=end)


def run(command):
    if os.system(command) != 0:
        exit(3)


def try_run(command):
    return os.system(command)


def print_file(path):
    f = open(path, "r")
    for s in f.readlines():
        neutral(s, end="")
    neutral()
    f.close()


# Compiling

info("Compiling generator...")
if try_run(GEN_COMPILE) != 0:
    error("Generator compilation failed")
    exit(3)
success("Generator compilation finished")

info("Compiling solution...")
if try_run(SOLUTION_COMPILE) != 0:
    error("Solution compilation failed")
    exit(3)
success("Solution compilation finished")

info("Compiling checker...")
if try_run(CHECKER_COMPILE) != 0:
    error("Checker compilation failed")
    exit(3)
success("Checker compilation finished")

# Testing

cnt = 1
while True:
    warning(f"Test {cnt}: ", end="")

    if try_run(GEN_RUN + f" > {WORKING_DIRECTORY}input.txt") != 0:
        error("Generator runtime error")
        exit(3)

    if try_run(SOLUTION_RUN + f" < \"{WORKING_DIRECTORY}input.txt\"" +
               f" > \"{WORKING_DIRECTORY}output.txt\"") != 0:
        error("Runtime error")
        info("Input:")
        print_file(f"{WORKING_DIRECTORY}input.txt")
        exit(0)

    if try_run(CHECKER_RUN + f" < \"{WORKING_DIRECTORY}input.txt\"" +
                             f" < \"{WORKING_DIRECTORY}output.txt\""
                             f" > \"{WORKING_DIRECTORY}verdict.txt\"") != 0:
        error("Checker runtime error")
        info("Input:")
        print_file(f"{WORKING_DIRECTORY}input.txt")
        exit(3)

    verdict = open(f"{WORKING_DIRECTORY}verdict.txt", "r").read(2)

    if verdict in BAD_VERDICTS:
        error(verdict)

        info("Input:")
        print_file(f"{WORKING_DIRECTORY}input.txt")

        info("Solution output:")
        print_file(f"{WORKING_DIRECTORY}output.txt")

        info("Checker output:")
        print_file(f"{WORKING_DIRECTORY}verdict.txt")
        exit(0)

    success(verdict)

    if PRINT_PASSED_TESTS:
        info("Input:")
        print_file(f"{WORKING_DIRECTORY}input.txt")

        info("Answer:")
        print_file(f"{WORKING_DIRECTORY}answer.txt")

    cnt += 1
