
// Params

#define USE_QUICK_IO false
#define USE_INT_128 false
#define USE_TIME_FUNCTION true

// Includes

#include <iostream>
#include <vector>

// Integers

#define  INF16   32767
#define  UINF16  65535
#define  INF32   2147483647
#define  UINF32  4294967295
#define  INF64   9223372036854775807
#define  UINF64  18446744073709551615

typedef signed short int       int16;
typedef unsigned short int     uint16;
typedef signed int             int32;
typedef unsigned int           uint32;
typedef signed long long int   int64;
typedef unsigned long long int uint64;

#define ll   long long int
#define uint unsigned int
#define ull  unsgined long long int

#if USE_INT_128
#include <cstdint>
#define  INF128  170141183460469231731687303715884105727
#define  UINF128 340282366920938463463374607431768211455
typedef __int128_t             int128;
typedef __uint128_t            uint128;
#endif

// Functions

template<typename T>
void cout_vector(std::vector<T> vector, bool new_line=true) {
    for (size_t i = 0; i < vector.size(); i++) {
        std::cout << vector[i] << " ";
    }
    if (new_line) std::cout << "\n";
}

template<typename T>
void fill_vector(std::vector<T> & vector, T value) {
    std::fill(vector.begin(), vector.end(), value);
}

#if USE_TIME_FUNCTION
#include <ctime>
template<typename T, typename... Args>
uint time(T (*func)(Args...), Args... args) {
    uint start_time = clock();
    func(std::forward<Args>(args)...);
    return clock() - start_time;
}
#endif

void enable_quick_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
}

// Main

void solve() {

}

// Entry point

int main() {
    if (USE_QUICK_IO) enable_quick_io();
    std::cout << __cplusplus << std::endl;
    solve();
    return 0;
}
