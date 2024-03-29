# Libraries

import os
from termcolor import cprint

from config import *


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

if IGNORE_WRONG_ANSWER:
    warning("Stress ignores verdict \"Wrong answer\"")

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

info("Compiling correct solution...")
if try_run(CORRECT_SOLUTION_COMPILE) != 0:
    error("Correct solution compilation failed")
    exit(3)
success("Correct solution compilation finished")

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

    if try_run(CORRECT_SOLUTION_RUN + f" < \"{WORKING_DIRECTORY}input.txt\"" +
               f" > \"{WORKING_DIRECTORY}answer.txt\"") != 0:
        error("Correct solution runtime error")
        info("Input:")
        print_file(f"{WORKING_DIRECTORY}input.txt")
        exit(3)

    if (not IGNORE_WRONG_ANSWER) and (
            try_run(f"cmp {WORKING_DIRECTORY}output.txt {WORKING_DIRECTORY}answer.txt --silent") != 0):
        error("Wrong answer")

        info("Input:")
        print_file(f"{WORKING_DIRECTORY}input.txt")

        info("Solution output:")
        print_file(f"{WORKING_DIRECTORY}output.txt")

        info("Answer:")
        print_file(f"{WORKING_DIRECTORY}answer.txt")
        exit(0)

    success("OK")

    if PRINT_PASSED_TESTS:
        info("Input:")
        print_file(f"{WORKING_DIRECTORY}input.txt")

        info("Answer:")
        print_file(f"{WORKING_DIRECTORY}answer.txt")

    cnt += 1
