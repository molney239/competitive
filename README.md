# C++ competitive helpers
The repository contains C++ code that can be used for participation in competitive programming contests.
It may be useful to save time on preparation, writing and debugging code.

## ```template```

This directory contains C++ file template that provide useful things such as:

- Pragmas and debug helpers
 ```cpp
#ifdef LOCAL
    #define _GLIBCXX_DEBUG
#else
    #pragma GCC optimize("O3,unroll-loops,inline-small-functions,inline-functions-called-once")
    #pragma GCC target("avx,avx2")
#endif
```

- Libraries
```cpp
#include <bits/stdc++.h>
using namespace std;
```

- I/O overload for vectors and pairs, colored output (for running in terminal) and removing cerr on testing system
```cpp
template<typename T> istream& operator>>(istream& in, vector<T>& v);
template<typename T> ostream& operator<<(ostream& out, const vector<T>& v);
template<typename T1, typename T2> istream& operator>>(istream& in, pair<T1, T2>& p);
template<typename T1, typename T2> ostream& operator<<(ostream& out, const pair<T1, T2>& p);
istream& operator>>(istream& in, vector<bool>& v) { bool n; for (auto&& i : v) { in >> n; i = n; } return in; }
template<typename T> istream& operator>>(istream& in, vector<T>& v) { for (auto& x : v) in >> x; return in; }
template<typename T> ostream& operator<<(ostream& out, const vector<T>& v) { for (auto& x : v) out << x << " "; return out; }
template<typename T1, typename T2> istream& operator>>(istream& in, pair<T1, T2>& p) { in >> p.first >> p.second; return in; }
template<typename T1, typename T2> ostream& operator<<(ostream& out, const pair<T1, T2>& p) { out << p.first << " " << p.second; return out; }
```

- mt19937_64 random generator with random seed
```cpp
mt19937_64 rnd((unsigned int) chrono::steady_clock::now().time_since_epoch().count());
```

- Macroses and short typenames
```cpp
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define nl '\n'

typedef long long ll;
typedef long double ld;
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
    freopen("solve.in", "r", stdin);
    freopen("solve.out", "w", stdout);
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

## ```stress```

This directory includes Python code for stress-testing your C++ solutions.

```config.py``` contains parameters, such as:
- `SOLUTION_COMPILER_FLAGS` - flags for compiling solution (*"-D_GLIBCXX_DEBUG" by default*)
- `*_PATH` - paths to codes of solution, "stupid" solution, checker and generatorde
- `*_COMPILER` - commands to compile solution, "stupid" solution, checker and generator
- `*_RUN` - commands to run solution, "stupid" solution, checker and generator
- `USE_CHECKER_INSTEAD_OF_STUPID` - if True, checker will be used for accepting solution output (*False by default*)
- `PRINT_PASSED_TESTS` - if True, accepted tests will be printed (*False by default*)

For stress, configure `config.py` and run `stress.py`.
