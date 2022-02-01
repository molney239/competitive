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

#[[#define]]# rep(i, n) for (int (i) = 0; (i) < (n); (i)++)
#[[#define]]# repn(i, n) for (int (i) = 0; (i) <= (n); (i)++)
#[[#define]]# rep1(i, n) for (int (i) = 1; (i) < (n); (i)++)
#[[#define]]# rep1n(i, n) for (int (i) = 1; (i) <= (n); (i)++)
#[[#define]]# repr(i, n) for (int (i) = (n) - 1; (i) >= 0; (i)--)
#[[#define]]# all(v) (v).begin(), (v).end()
#[[#define]]# rall(v) (v).rbegin(), (v).rend()
#[[#define]]# nl "\n"

#[[#define]]# ll long long
#[[#define]]# uint unsigned int
#[[#define]]# ull unsigned long long
#[[#define]]# ld long double
#[[#define]]# str string
#[[#define]]# pi pair<int, int>
#[[#define]]# pl pair<ll, ll>

#[[#define]]# vec vector
#[[#define]]# vi vector<int>
#[[#define]]# vl vector<ll>
#[[#define]]# vb vector<bool>
#[[#define]]# vpi vector<pair<int, int>>
#[[#define]]# vvi vector<vi>

template<typename T1, typename T2> ostream& operator<<(ostream &os, pair<T1, T2>& p) { return os << p.first << " " << p.second; }
template<typename T1, typename T2> istream& operator>>(istream& in, pair<T1, T2>& p) { in >> p.first >> p.second; return in; }
template<typename T> ostream& operator<<(ostream &os, vector<T>& v) { for (auto x : v) os << x << " "; return os; }
template<typename T> istream& operator>>(istream& in, vector<T>& v) { for (auto x : v) in >> x; return in; }

#[[#define]]# USE_QUICK_IO
//#[[#define]]# USE_T
//#[[#define]]# USE_FILESTREAM


void solve() {
    
    
    
}


int main() {

    #[[#ifdef]]# USE_FILESTREAM
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #[[#endif]]#

    #[[#ifdef]]# USE_QUICK_IO
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    #[[#endif]]#
    cout << setprecision(6) << fixed;

    ll t = 1;
    #[[#ifdef]]# USE_T
        cin >> t;
    #[[#endif]]#
    rep(i, t) solve();

}
