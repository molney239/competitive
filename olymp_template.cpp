#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <iomanip>
using namespace std;
const bool USE_QUICK_IO = true;
const bool USE_T = false;
const unsigned PRECISION = 6;

#define rep(i, n) for (int (i) = 0; (i) < (n); (i)++)
#define repn(i, n) for (int (i) = 0; (i) <= (n); (i)++)
#define rep1(i, n) for (int (i) = 1; (i) < (n); (i)++)
#define rep1n(i, n) for (int (i) = 1; (i) <= (n); (i)++)
#define repr(i, n) for (int (i) = (n) - 1; (i) >= 0; (i)--)
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sze(v) (v).size()
#define each(x, v) for (auto &(x) : (v))
#define vec vector
#define f0r(i, a, b) for (int (i) = (a); (i) <= (b); (i)++)
#define nl "\n"

template<typename T1, typename T2>
std::ostream& operator<<(std::ostream &os, pair<T1, T2>& p) { return os << p.first << " " << p.second; }
template<typename T1, typename T2>
std::istream& operator >> (std::istream& in, pair<T1, T2>& p) { in >> p.first >> p.second; return in; }
template<typename T>
std::ostream& operator<<(std::ostream &os, vector<T>& v) { for(T x : v) os << x << " "; return os; }
template<typename T>
std::istream& operator >> (std::istream& in, vector<T>& v) { for(T& x : v) in >> x; return in; }
template<typename T>
bool even(T n) { return !(n % 2); }

using si = short;
using ll = long long;
using uint = unsigned int;
using usi = unsigned short;
using ull = unsigned long long;
using ld = long double;
using str = string;
using pi = pair<int, int>;
using pl = pair<ll, ll>;

using vi = vector<int>;
using vl = vector<ll>;
using vb = vector<bool>;
using vpi = vector<pair<int, int>>;
using vvi = vector<vi>;

void solve() {
    
    
    
}

int main() {

    if (USE_QUICK_IO) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
    }
    cout << setprecision(PRECISION) << fixed;

    if (USE_T) {
        ll t;
        cin >> t;
        rep(i, t) solve();
    } else solve();

}
