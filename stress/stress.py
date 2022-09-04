
# Libraries

import os
import subprocess

import colorama
from termcolor import cprint

import config

colorama.init()

try:

    # Compilation

    cprint("Compiling solution...", "blue")
    try:
        subprocess.run(config.SOLUTION_COMPILER).check_returncode()
    except (KeyboardInterrupt, SystemExit):
        raise
    except: 
        cprint("Solution compilation failed", "red")
        exit(1)
    cprint("Solution compilation finished", "green")

    if config.USE_CHECKER_INSTEAD_OF_STUPID:
        cprint("Compiling checker...", "blue")
        try:
            subprocess.run(config.CHECKER_COMPILER).check_returncode()
        except (KeyboardInterrupt, SystemExit):
            raise
        except:
            cprint("Checker compilation falied", "red")
            exit(1)
        cprint("Checker compilation finished", "green")
    else:
        cprint("Compiling stupid...", "blue")
        try:
            subprocess.run(config.STUPID_COMPILER).check_returncode()
        except (KeyboardInterrupt, SystemExit):
            raise
        except:
            cprint("Stupid compilation failed")
            exit(1)
        cprint("Stupid compilation finished", "green")

    cprint("Compiling generator...", "blue")
    try:
        subprocess.run(config.GEN_COMPILER)
    except (KeyboardInterrupt, SystemExit):
        raise
    except:
        cprint("Generator compilation failed", "red")
        exit(1)
    cprint("Generator compilation finished", "green")

    print()

    # Testing

    counter = 1
    while True:

        print(f"Test {counter}: ", end="")
        try:
            input_data = subprocess.run(config.GEN_RUN, capture_output=True, check=True).stdout
        except (KeyboardInterrupt, SystemExit):
            raise
        except:
            cprint("Generator runtime error", "red")
            exit(1)

        try:
            output_data = subprocess.run(config.SOLUTION_RUN, input=input_data, 
                                        capture_output=True, check=True).stdout
        except (KeyboardInterrupt, SystemExit):
            raise
        except Exception as e:
            cprint(f"Runtime error", "red")
            cprint("Input:", "blue")
            cprint(input_data.decode("utf-8"), "yellow")
            exit(1)

        if config.USE_CHECKER_INSTEAD_OF_STUPID:
            try:
                res = subprocess.run(config.CHECKER_RUN, 
                                    input=input_data + b'\n' + output_data, 
                                    capture_output=True, check=True).stdout.decode("utf-8")
            except (KeyboardInterrupt, SystemExit):
                raise
            except:
                cprint("Checker runtime error", "red")
                exit(1)

            if res[0] == '0':
                cprint(f"Wrong answer", "red")

                cprint("Input:", "blue")
                cprint(input_data.decode("utf-8"), "yellow")

                cprint("Solution output:", "blue")
                cprint(output_data.decode("utf-8"), "yellow")

                cprint("Checker verdict:", "blue")
                cprint(res[1:], "yellow")
                break
        else:
            try:
                res = subprocess.run(config.STUPID_RUN, input=input_data, capture_output=True, check=True).stdout
            except (KeyboardInterrupt, SystemExit):
                raise
            except:
                cprint("Stupid runtime error", "red")
                exit(1)

            if output_data != res:
                cprint(f"Wrong answer", "red")

                cprint("Input:", "blue")
                cprint(input_data.decode("utf-8"), "yellow")

                cprint("Solution output:", "blue")
                cprint(output_data.decode("utf-8"), "yellow")

                cprint("Stupid output:", "blue")
                cprint(res.decode("utf-8"), "yellow")
                break

        cprint(f"Accepted", "green")
        if config.PRINT_PASSED_TESTS:
            cprint("Input:", "blue")
            cprint(input_data.decode("utf-8"), "yellow")

            cprint("Solution output:", "blue")
            cprint(output_data.decode("utf-8"), "yellow")

            cprint("Stupid output:", "blue")
            cprint(res.decode("utf-8"), "yellow")

        counter += 1
except KeyboardInterrupt:
    cprint("Stopped", "blue")
