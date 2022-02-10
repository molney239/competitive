#pragma GCC optimize("O3,unroll-loops")
#pragma GCC diagnostic warning "-Wunused"
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int (i) = 0; (i)<(n); (i)++)
#define rep1(i, n) for (int (i) = 1; (i)<(n); (i)++)
#define repr(i, n) for (int (i) = (n) - 1; (i) >= 0; (i)--)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define nl "\n"

typedef long long ll;
typedef string str;
typedef pair<int, int> pi;
typedef vector<int> vi ;
typedef vector<ll> vl;
typedef vector<bool> vb;
typedef vector<pair<int, int>> vpi;
typedef vector<vi> vvi;

template<typename T> ostream& operator<<(ostream &os, vector<T>& v) { for(auto &x : v) os << x << " "; return os; }
template<typename T> istream& operator>>(istream &in, vector<T>& v) { for(auto &x : v) in >> x; return in; }

#define USE_QUICK_IO
//#define USE_T
//#define USE_FILESTREAM


void solve() {
    
    
    
}


int main() {
    #ifdef USE_FILESTREAM
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    #ifdef USE_QUICK_IO
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    #endif
    cout << setprecision(6) << fixed;
    ll t = 1;
    #ifdef USE_T
        cin >> t;
    #endif
    rep(i, t) solve();
}
