struct colored_cout {};
struct colored_cerr {};

template<typename T>
colored_cout& operator<<(colored_cout& out, const T& value) {
    cout << "\033[34m" << value << "\033[37m";
    return out;
}

template<typename T>
colored_cerr& operator<<(colored_cerr& out, const T& value) {
    cout << "\033[31m" << value << "\033[37m";
    return out;
}

colored_cout ccout;
colored_cerr ccerr;

#define cout ccout
#define cerr ccerr 
