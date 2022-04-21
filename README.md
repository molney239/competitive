# C++ code templates for competitive programming
This repository contains C++ program file templates for participation in competitive programming contests. It is useful to save time on preparation and writing code.

Templates include code on C++, that provide useful things, such as:
 - Libraries
```cpp
#include <bits/stdc++.h>
using namespace std;
```
 - Useful macros
```cpp
#define rep(i, n) for (long long (i) = 0; (i) < (n); (i)++)
#define rep1(i, n) for (long long (i) = 1; (i) < (n); (i)++)
#define repr(i, n) for (long long (i) = (n) - 1; (i) >= 0; (i)--)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define nl "\n"
```
- Short type names
```cpp
typedef long long ll;
typedef string str;
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
template<typename T>
istream& operator>> (istream& in, vector<T>& v) {
    for (auto& x : v) in >> x;
    return in;
}

template<typename T>
ostream& operator<< (ostream& os, vector<T>& v) {
    for (auto& x : v) os << x << " ";
    return os;
}

template<typename T1, typename T2>
istream& operator>> (istream& in, pair<T1, T2>& p) {
    in >> p.first >> p.second;
    return in;
}

template<typename T1, typename T2>
ostream& operator<< (ostream& os, pair<T1, T2>& p) {
    os << p.first << " " << p.second;
    return os;
}
```
 - Floating point output precision (6 decimal places by default)
```cpp
std::cout << std::setprecision(6) << std::fixed;
```
 - Speed up for standard I/O (optional, disabled by default)
```cpp
//#define USE_QUICK_IO
#ifdef USE_QUICK_IO
     std::ios_base::sync_with_stdio(false);
     std::cin.tie(nullptr);
     std::cout.tie(nullptr);
#endif
```
 - Redirecting filestream I/O to standard I/O (optional, disabled by defalut)
```cpp
//#define USE_FILESTREAM
#ifdef USE_FILESTREAM
     std::freopen("input.txt", "r", stdin);
     std::freopen("output.txt", "w", stdout);
#endif
```
 - Running solution for mutliple test cases (optional, disabled by default)
```cpp
//#define USE_T
long long t = 1;
#ifdef USE_T
    std::cin >> t;
#endif
for (long long i = 0; i < t; i++) solve(i + 1);
```

The repository also includes a lite version of this template that includes only the most commonly used things.

# Files
Repository includes the following files:
 - **competetive_template.cpp** - Main template
 - **clion_version.cpp** - Version of *competetive_template.cpp* for CLion IDE
 - **lite_competetive_template.cpp** - Lite version of template
 - **lite_clion_version.cpp** - Version of *lite_competetive_template.cpp* for CLion IDE
