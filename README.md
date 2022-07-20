# C++ code templates for competitive programming
This repository contains C++ program file templates for participation in competitive programming contests. It may be useful to save time on preparation and writing code.

# Description
Templates include code on C++, that provide useful things, such as:
 - Pragmas and debug helpers
 ```cpp
#pragma GCC optimize("O3,unroll-loops,inline-small-functions,inline-functions-called-once")
//#define _GLIBCXX_DEBUG
```
 - Libraries
```cpp
#include <bits/stdc++.h>
using namespace std;
```
 - Additional libraries and ordered_set declaration *(disabled by default)*
 ```cpp
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/rope>
using namespace __gnu_pbds;
using namespace __gnu_cxx;
typedef tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
```
 - Custom random hash function
 ```cpp
const int RANDOM = chrono::duration_cast<chrono::nanoseconds>(chrono::system_clock::now().time_since_epoch()).count();
struct chash { 
    int operator()(int x) const {
        return x ^ RANDOM;
    }
};
 ```
 - Useful macros
```cpp
#define rep(i, n) for (long long (i) = 0; (i) < (long long)(n); ++(i))
#define rep1(i, n) for (long long (i) = 1; (i) < (long long)(n); ++(i))
#define repr(i, n) for (long long (i) = (long long)(n) - 1; (i) >= 0; --(i))
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define nl '\n'
```
- Short type names
```cpp
typedef long long ll;
typedef pair<int, int> pi;
typedef pair<long long, long long> pl;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<bool> vb;
typedef vector<pair<int, int>> vpi;
typedef vector<vector<int>> vvi;
```
 - I/O overload for vectors and pairs
```cpp
istream &operator>>(istream &in, vector<bool> &v) {
    bool n;
    for (auto &&i : v) {
        in >> n;
        i = n;
    }
    return in;
}

template<typename T>
istream &operator>>(istream &in, vector<T> &v) {
    for (auto &&x : v) in >> x;
    return in;
}

template<typename T>
ostream &operator<<(ostream &os, vector<T> &v) {
    for (auto &&x : v) os << x << " ";
    return os;
}

template<typename T1, typename T2>
istream &operator>>(istream &in, pair<T1, T2> &p) {
    in >> p.first >> p.second;
    return in;
}

template<typename T1, typename T2>
ostream &operator<<(ostream &os, pair<T1, T2> &p) {
    os << p.first << " " << p.second;
    return os;
}
```
 - mt19937_64 random generator with random seed
```cpp
mt19937_64 rnd(chrono::duration_cast<chrono::nanoseconds>(chrono::system_clock::now().time_since_epoch()).count());
```
 - Speed up for standard I/O *(optional, enabled by default and disabled on local machine)*
```cpp
#define QUICK_IO

#ifdef QUICK_IO
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
```
 - Redirecting filestream I/O to standard I/O *(optional, disabled by defalut and disabled on local machine)*
```cpp
//#define FILESTREAM

#ifdef FILESTREAM
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
```
 - Floating point output precision *(9 decimal places by default)*
```cpp
cout << setprecision(9) << fixed;
```
 - Running solution for multiple test cases *(optional, disabled by default)*
```cpp
//#define MULTIPLE_TESTCASES

unsigned t = 1;
#ifdef MULTIPLE_TESTCASES
    cin >> t;
#endif
for (unsigned i = 1; i <= t; ++i) solve(i);
```
 - Printing execution time of program to `stderr`
```cpp
clock_t start_time = clock();
// ...
cerr << "execution time = " << clock() - start_time << " ms\n";
```

Repository also includes a lite version of this template that includes only the most commonly used things.

# Files
Repository includes the following files:
 - **competetive_template.cpp** - Main template
 - **clion_version.cpp** - Version of *competetive_template.cpp* for CLion IDE
 - **lite_competetive_template.cpp** - Lite version of template
 - **lite_clion_version.cpp** - Version of *lite_competetive_template.cpp* for CLion IDE
