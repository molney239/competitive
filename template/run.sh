clear &&
echo "Compiling $1..." &&
g++ "$2" -std=c++20 -DLOCAL -o ~/.cmp/solve &&
clear &&
~/.cmp/solve;
exitCode=$? &&
if ! [[ "$exitCode" == "0" ]]; then
    echo -e "\n\\033[31m[ exit code is $exitCode ]\033[37m"
else
    echo
fi