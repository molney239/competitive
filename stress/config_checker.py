SOLUTION_COMPILER_FLAGS = "-D_GLIBCXX_DEBUG -fsanitize=address,undefined"

ROOT_DIRECTORY = "/home/molney/code/competitive/Tinkoff Generation 2022-2023/7. DP Optimizations/"
WORKING_DIRECTORY = "/home/molney/code/competitive/competitive/stress/files/"

GEN_PATH = ROOT_DIRECTORY + "D_gen.cpp"
SOLUTION_PATH = ROOT_DIRECTORY + "D2.cpp"
CHECKER_PATH = ROOT_DIRECTORY + "D_check.cpp"

GEN_COMPILE = f"g++ \"{GEN_PATH}\" -o {WORKING_DIRECTORY}gen"
SOLUTION_COMPILE = f"g++ \"{SOLUTION_PATH}\" {SOLUTION_COMPILER_FLAGS} -o {WORKING_DIRECTORY}solve"
CHECKER_COMPILE = f"g++ \"{CHECKER_PATH}\" -o {WORKING_DIRECTORY}check"

GEN_RUN = WORKING_DIRECTORY + "gen"
SOLUTION_RUN = WORKING_DIRECTORY + "solve"
CHECKER_RUN = WORKING_DIRECTORY + "check"

PRINT_PASSED_TESTS = False
BAD_VERDICTS = ["WA"]
