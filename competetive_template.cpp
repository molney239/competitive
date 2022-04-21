#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (long long (i) = 0; (i) < (n); (i)++)
#define rep1(i, n) for (long long (i) = 1; (i) < (n); (i)++)
#define repr(i, n) for (long long (i) = (n) - 1; (i) >= 0; (i)--)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define nl "\n"

typedef long long ll;
typedef string str;
typedef pair<int, int> pi;
typedef pair<long long, long long> pl;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<bool> vb;
typedef vector<pair<int, int>> vpi;
typedef vector<vector<int>> vvi;

template<typename T> istream& operator>>(istream& in, vector<T>& v) { for (auto& x : v) in >> x; return in; }
template<typename T> ostream& operator<<(ostream& os, vector<T>& v) { for (auto& x : v) os << x << " "; return os; }
template<typename T1, typename T2> istream& operator>>(istream& in, pair<T1, T2>& p) { in >> p.first >> p.second; return in; }
template<typename T1, typename T2> ostream& operator<<(ostream& os, pair<T1, T2>& p) { os << p.first << " " << p.second; return os; }

//#define USE_QUICK_IO
//#define USE_T
//#define USE_FILESTREAM


void solve(long long test_case) {
    
    
    
}


int main() {
    #ifdef USE_FILESTREAM
        std::freopen("input.txt", "r", stdin);
        std::freopen("output.txt", "w", stdout);
    #endif
    #ifdef USE_QUICK_IO
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
    #endif
    std::cout << std::setprecision(6) << std::fixed;
    long long t = 1;
    #ifdef USE_T
        std::cin >> t;
    #endif
    for (long long i = 0; i < t; i++) solve(i + 1);
}
