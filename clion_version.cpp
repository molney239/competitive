#[[#include]]# <bits/stdc++.h>
using namespace std;

#[[#define]]# rep(i, n) for (int (i) = 0; (i)<(n); (i)++)
#[[#define]]# rep1(i, n) for (int (i) = 1; (i)<(n); (i)++)
#[[#define]]# repr(i, n) for (int (i) = (n) - 1; (i) >= 0; (i)--)
#[[#define]]# all(v) (v).begin(), (v).end()
#[[#define]]# rall(v) (v).rbegin(), (v).rend()
#[[#define]]# nl "\n"

#[[#define]]# int32 int32_t
#[[#define]]# int long long
typedef string str;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<pair<int, int>> vpi;
typedef vector<vector<int>> vvi;

template<typename T> istream& operator>>(istream &in, vector<T>& v) { for (auto &x : v) in >> x; return in; }
template<typename T> ostream& operator<<(ostream &os, vector<T>& v) { for (auto &x : v) os << string(x) << " "; return os; }
template<typename T> istream& operator>>(istream &in, pair<T, T>& p) { in >> p.first >> p.second; return in; }
template<typename T> ostream& operator<<(ostream &os, pair<T, T>& p) { os << p.first << " " << p.second; return os; }

//#[[#define]]# USE_QUICK_IO
//#[[#define]]# USE_T
//#[[#define]]# USE_FILESTREAM


void solve() {
    
    
    
}


int32_t main() {
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
    int32_t t = 1;
    #[[#ifdef]]# USE_T
        cin >> t;
    #[[#endif]]#
    for (int32_t i = 0; i < t; i++) solve();
}
