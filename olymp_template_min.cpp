// Set it to false if your program need interactive I/O
#define USE_QUICK_IO true

#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>
#include <ctime>
using namespace std;
#define  INF16   32767
#define  UINF16  65535
#define  INF32   2147483647
#define  UINF32  4294967295
#define  INF64   9223372036854775807
#define  UINF64  18446744073709551615
#define  INF128  170141183460469231731687303715884105727
#define  UINF128 340282366920938463463374607431768211455
typedef signed short int       int16;
typedef unsigned short int     uint16;
typedef signed int             int32;
typedef unsigned int           uint32;
typedef signed long long int   int64;
typedef unsigned long long int uint64;
typedef __int128_t             int128;
typedef __uint128_t            uint128;
typedef signed short int       sint;
typedef unsigned short int     usi;
typedef unsigned int           uint;
typedef signed long long int   ll;
typedef unsigned long long int ull;
typedef long double            ld;

template<typename T>
void print_vector(std::vector<T> v, bool new_line=true) {
    for (size_t i = 0; i < v.size(); i++) std::cout << v[i] << " ";
    if (new_line) std::cout << "\n";
}
void enable_quick_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
}
template<typename T, typename... Args>
uint time(T (*func)(Args...), Args... args) {
    uint start_time = clock();
    func(std::forward<Args>(args)...);
    return clock() - start_time;
}
template <typename T>
std::vector<T> sort_vector(std::vector<T> &v, bool descending = false) {
    if (descending) v = sort_vector(v, [] (T element1, T element2) { return element1 > element2; });
    else v = sort_vector(v, [] (T element1, T element2) { return element1 < element2; });
    return v;
}
template <typename T>
std::vector<T> sort_vector(std::vector<T> &v, bool (*comp) (T, T)) {
    v = std::sort(v.begin(), v.end(), comp);
    return v;
}



void solve() {

}


int main() {
    if (USE_QUICK_IO) enable_quick_io();
    solve();
}