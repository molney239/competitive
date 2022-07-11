#[[#pragma]]# GCC optimize("O3,unroll-loops")
//#[[#define]]# _GLIBCXX_DEBUG
#[[#include]]# <bits/stdc++.h>
using namespace std;

//#[[#include]]# <ext/pb_ds/assoc_container.hpp>
//#[[#include]]# <ext/pb_ds/tree_policy.hpp>
//#[[#include]]# <ext/rope>
//using namespace __gnu_pbds;
//using namespace __gnu_cxx;
//typedef tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

#[[#define]]# rep(i, n) for (long long (i) = 0; (i) < (long long)(n); (i)++)
#[[#define]]# rep1(i, n) for (long long (i) = 1; (i) < (long long)(n); (i)++)
#[[#define]]# repr(i, n) for (long long (i) = (long long)(n) - 1; (i) >= 0; (i)--)
#[[#define]]# all(v) (v).begin(), (v).end()
#[[#define]]# rall(v) (v).rbegin(), (v).rend()
#[[#define]]# nl '\n'

typedef long long ll;
typedef pair<int, int> pi;
typedef pair<long long, long long> pl;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<bool> vb;
typedef vector<pair<int, int>> vpi;
typedef vector<vector<int>> vvi;

istream& operator>>(istream& in, vector<bool>& v) { bool n; for (auto&& i : v) { in >> n; i = n; } return in; }
template<typename T> istream& operator>>(istream& in, vector<T>& v);
template<typename T> ostream& operator<<(ostream& os, vector<T>& v);
template<typename T1, typename T2> istream& operator>>(istream& in, pair<T1, T2>& p);
template<typename T1, typename T2> ostream& operator<<(ostream& os, pair<T1, T2>& p);
template<typename T> istream& operator>>(istream& in, vector<T>& v) { for (auto&& x : v) in >> x; return in; }
template<typename T> ostream& operator<<(ostream& os, vector<T>& v) { for (auto&& x : v) os << x << " "; return os; }
template<typename T1, typename T2> istream& operator>>(istream& in, pair<T1, T2>& p) { in >> p.first >> p.second; return in; }
template<typename T1, typename T2> ostream& operator<<(ostream& os, pair<T1, T2>& p) { os << p.first << " " << p.second; return os; }

mt19937_64 rnd(chrono::duration_cast<chrono::nanoseconds>(chrono::system_clock::now().time_since_epoch()).count());

#[[#define]]# QUICK_IO
//#[[#define]]# MULTIPLE_TESTCASES
//#[[#define]]# FILESTREAM

void solve(unsigned test_case) {
    
    
    
}


int32_t main() {
    #[[#ifndef]]# MOLNEY_LOCAL
        #[[#ifdef]]# QUICK_IO
            ios_base::sync_with_stdio(false);
            cin.tie(nullptr);
        #[[#endif]]#
        #[[#ifdef]]# FILESTREAM
            freopen("input.txt", "r", stdin);
            freopen("output.txt", "w", stdout);
        #[[#endif]]#
    #[[#endif]]#

    cout << setprecision(9) << fixed;

    clock_t start_time = clock();
    unsigned t = 1;
    #[[#ifdef]]# MULTIPLE_TESTCASES
        cin >> t;
    #[[#endif]]#
    for (unsigned i = 1; i <= t; i++) {
        #[[#if]]# defined(MULTIPLE_TESTCASES) and defined(MOLNEY_LOCAL)
            cout << "Testcase " << i << ":\n";
        #[[#endif]]#
        solve(i);
        #[[#if]]# defined(MULTIPLE_TESTCASES) and defined(MOLNEY_LOCAL)
            cout << " ----- \n";
        #[[#endif]]#
    }
    cerr << "execution time = " << clock() - start_time << " ms\n";
}