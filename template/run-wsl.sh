clear &&
echo "Compiling $1..." &&
/mnt/c/msys64/mingw64/bin/g++.exe "$2" -std=c++20 -DLOCAL -o C:/cpp/solve &&
clear &&
/mnt/c/cpp/solve.exe;
exitCode=$? &&
if ! [[ "$exitCode" == "0" ]]; then
    echo -e "\n\\033[31m[ exit code is $exitCode ]"
fi
