#ifdef LOCAL
    #define _GLIBCXX_DEBUG
#else
    #pragma GCC optimize("O3,unroll-loops,inline-small-functions,inline-functions-called-once")
    #pragma GCC target("avx,avx2")
#endif
#include <bits/stdc++.h>
using namespace std;

istream& operator>>(istream& in, vector<bool>& v) { bool n; for (auto&& i : v) { in >> n; i = n; } return in; }
template<typename T> istream& operator>>(istream& in, vector<T>& v) { for (auto&& x : v) in >> x; return in; }
template<typename T> ostream& operator<<(ostream& os, const vector<T>& v) { for (auto&& x : v) os << x << " "; return os; }
template<typename T1, typename T2> istream& operator>>(istream& in, pair<T1, T2>& p) { in >> p.first >> p.second; return in; }
template<typename T1, typename T2> ostream& operator<<(ostream& os, const pair<T1, T2>& p) { os << p.first << " " << p.second; return os; }
#ifdef LOCAL
    #include "debug.h"
#else
    struct my_cerr {}; template<typename T> my_cerr& operator<<(my_cerr& out, const T& value) { return out; }
    my_cerr mcerr;
    #define cerr mcerr
#endif

template<typename T1, typename T2> bool chmin(T1& a, const T2& b) { if (a > b) { a = b; return true; } return false; }
template<typename T1, typename T2> bool chmax(T1& a, const T2& b) { if (a < b) { a = b; return true; } return false; }

mt19937_64 rnd((unsigned int) chrono::steady_clock::now().time_since_epoch().count());

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define nl '\n'

typedef long long ll;
typedef long double ld;

#define QUICK_IO
//#define MULTIPLE_TESTCASES
//#define FILESTREAM


void solve(unsigned test_case) {
    
    
    
}


signed main() {
    #ifndef LOCAL
        #ifdef QUICK_IO
            ios_base::sync_with_stdio(false);
            cin.tie(nullptr);
        #endif
        #ifdef FILESTREAM
            freopen("solve.in", "r", stdin);
            freopen("solve.out", "w", stdout);
        #endif
    #endif
    cout << setprecision(9) << fixed;
    unsigned t = 1;
    #ifdef MULTIPLE_TESTCASES
        cin >> t;
    #endif
    for (unsigned i = 1; i <= t; ++i) solve(i);
}
