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
typedef pair<int, int> pl;
typedef vector<int> vi;
typedef vector<int> vl;
typedef vector<bool> vb;
typedef vector<pair<int, int>> vpi;
typedef vector<vector<int>> vvi;

template<typename T> istream& operator>>(istream &in, vector<T>& v) { for (auto &x : v) in >> x; return in; }
template<typename T> ostream& operator<<(ostream &os, vector<T>& v) { for (auto &x : v) os << x << " "; return os; }
template<typename T1, typename T2> istream& operator>>(istream &in, pair<T1, T2>& p) { in >> p.first >> p.second; return in; }
template<typename T1, typename T2> ostream& operator<<(ostream &os, pair<T1, T2>& p) { os << p.first << " " << p.second; return os; }

//#define USE_QUICK_IO
//#define USE_T
//#define USE_FILESTREAM


void solve(int test_case) {
    
    
    
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
    long long t = 1;
    #ifdef USE_T
        cin >> t;
    #endif
    for (long long i = 0; i < t; i++) solve(i + 1);
}
