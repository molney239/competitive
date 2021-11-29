#[[#include]]# <iostream>
#[[#include]]# <iomanip>
#[[#include]]# <vector>
#[[#include]]# <stack>
#[[#include]]# <queue>
#[[#include]]# <algorithm>
#[[#include]]# <cmath>
#[[#include]]# <map>
#[[#include]]# <set>
using namespace std;

#[[#define]]# rep(i, n) for (long long (i) = 0; (i) < (n); (i)++)
#[[#define]]# repn(i, n) for (long long (i) = 0; (i) <= (n); (i)++)
#[[#define]]# rep1(i, n) for (long long (i) = 1; (i) < (n); (i)++)
#[[#define]]# rep1n(i, n) for (long long (i) = 1; (i) <= (n); (i)++)
#[[#define]]# repr(i, n) for (long long (i) = (n) - 1; (i) >= 0; (i)--)
#[[#define]]# all(v) (v).begin(), (v).end()
#[[#define]]# rall(v) (v).rbegin(), (v).rend()
#[[#define]]# each(x, v) for (auto& (x) : (v))
#[[#define]]# vec vector
#[[#define]]# f0r(i, a, b) for (long long (i) = (a); (i) < (b); (i)++)
#[[#define]]# f0rn(i, a, b) for (long long (i) = (a); (i) <= (b); (i)++)
#[[#define]]# nl "\n"

#[[#define]]# si short
#[[#define]]# ll long long
#[[#define]]# uint unsigned int
#[[#define]]# usi unsigned short
#[[#define]]# ull unsigned long long
#[[#define]]# ld long double
#[[#define]]# str string
#[[#define]]# pi pair<int, int>
#[[#define]]# pl pair<ll, ll>

#[[#define]]# vi vector<int>
#[[#define]]# vl vector<ll>
#[[#define]]# vb vector<bool>
#[[#define]]# vpi vector<pair<int, int>>
#[[#define]]# vvi vector<vi>

template<typename T1, typename T2> ostream& operator<<(ostream &os, pair<T1, T2>& p) { return os << p.first << " " << p.second; }
template<typename T1, typename T2> istream& operator>>(istream& in, pair<T1, T2>& p) { in >> p.first >> p.second; return in; }
template<typename T> ostream& operator<<(ostream &os, vector<T>& v) { each(x, v) os << x << " "; return os; }
template<typename T> istream& operator>>(istream& in, vector<T>& v) { each(x, v) in >> x; return in; }
template<typename T> bool even(const T& n) { return !(n % 2); }

#[[#define]]# USE_QUICK_IO
//#[[#define]]# USE_T
#[[#define]]# PRECISION 6


void solve() {
    
    
    
}


int main() {

    #[[#ifdef]]# USE_QUICK_IO
        ios_base::sync_with_stdio(false);
        cin.tie(0);
    #[[#endif]]#
    cout << setprecision(PRECISION) << fixed;

    #[[#ifdef]]# USE_T
        ll t;
        cin >> t;
        rep(i, t) solve();
    #[[#else]]#
        solve();
    #[[#endif]]#

}
