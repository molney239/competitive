SOLUTION_COMPILER_FLAGS = "-D_GLIBCXX_DEBUG"

SOLUTION_PATH = "solve.cpp"
STUPID_PATH = "stupid.cpp"
CHECKER_PATH = "check.cpp"
GEN_PATH = "gen.cpp"

SOLUTION_COMPILER = f"g++ \"{SOLUTION_PATH}\" {SOLUTION_COMPILER_FLAGS} -o solve.exe"
STUPID_COMPILER = f"g++ \"{STUPID_PATH}\" -o stupid.exe"
CHECKER_COMPILER = f"g++ \"{CHECKER_PATH}\" -o check.exe"
GEN_COMPILER = f"g++ \"{GEN_PATH}\" -o gen.exe"

SOLUTION_RUN = "solve.exe"
STUPID_RUN = "stupid.exe"
CHECKER_RUN = "check.exe"
GEN_RUN = "gen.exe"

USE_CHECKER_INSTEAD_OF_STUPID = False
PRINT_PASSED_TESTS = False
