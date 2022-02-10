# C++ code templates for competitive programming
This repository contains C++ program file templates for participation in competitive programming contests. It is useful to save time on preparation and writing code.

Templates include code on C++, that provide useful things, such as:
 - GCC compiler optimization pragmas
```cpp
#pragma GCC optimize("O3,unroll-loops")
```
 - Pragmas to disable warnings
```cpp
#pragma GCC diagnostic warning "-Wunused"
```
 - Libraries
```cpp
#include <bits/stdc++.h>
using namespace std;
```
 - Useful macros
```cpp
#define rep(i, n) for (int (i) = 0; (i)<(n); (i)++)
#define rep1(i, n) for (int (i) = 1; (i)<(n); (i)++)
#define repr(i, n) for (int (i) = (n) - 1; (i) >= 0; (i)--)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define nl "\n"
```
 - Short type names
```cpp
typedef long long ll;
typedef string str;
typedef pair<int, int> pi;
typedef vector<int> vi ;
typedef vector<ll> vl;
typedef vector<bool> vb;
typedef vector<pair<int, int>> vpi;
typedef vector<vi> vvi;
```
 - I/O overload for vectors
```cpp
template<typename T>
ostream& operator<< (ostream &os, vector<T> &v) {
    for (auto &x : v) os << x << " ";
    return os;
}
template<typename T>
istream& operator>> (istream &in, vector<T> &v) {
    for (auto &x : v) in >> x;
    return in;
}
```
 - Floating point output precision (6 decimal plaes by default)
```cpp
cout << setprecision(6) << fixed;
```
 - Speed up for standard I/O (optional, enabled by default)
```cpp
#define USE_QUICK_IO
#ifdef USE_QUICK_IO
     ios_base::sync_with_stdio(false);
     cin.tie(nullptr);
     cout.tie(nullptr);
 #endif
 ```
 - Redirecting filestream I/O to standard I/O (optional, disabled by defalut)
```cpp
//#define USE_FILESTREAM
#ifdef USE_FILESTREAM
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
#endif
```
 - Running solution for mutliple test cases (optional, disabled by default)
```cpp
//#define USE_T
ll t = 1;
#ifdef USE_T
    cin >> t;
#endif
rep(i, t) solve();
```

The repository also includes a lite version of this template that includes only the most commonly used things.

# Files
Repository includes the following files:
 - **competetive_template.cpp** - Main template
 - **clion_version.cpp** - Version of *competetive_template.cpp* for CLion IDE
 - **lite_competetive_template.cpp** - Lite version of template
 - **lite_clion_version.cpp** - Version of *lite_competetive_template.cpp* for CLion IDE
