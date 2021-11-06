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

#define rep(i, n) for (size_t (i) = 0; (i) < (n); (i)++)
#define repn(i, n) for (size_t (i) = 0; (i) <= (n); (i)++)
#define rep1(i, n) for (size_t (i) = 1; (i) < (n); (i)++)
#define rep1n(i, n) for (size_t (i) = 1; (i) <= (n); (i)++)
#define repr(i, n) for (size_t (i) = (n) - 1; (i) >= 0; (i)--)
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sze(v) (v).size()
#define each(x, v) for (auto& (x) : (v))
#define vec vector
#define f0r(i, a, b) for (size_t (i) = (a); (i) < (b); (i)++)
#define f0rn(i, a, b) for (size_t (i) = (a); (i) <= (b); (i)++)
#define nl "\n"
#define mp(a, b) make_pair(a, b)
#define itp(v) make_pair((v).begin(), (v).end())
#define nw(n, type) type (n); cin >> (n)
#define nwp(n, type, args...) type(n)(args); cin >> n

#define si short
#define ll long long
#define uint unsigned int
#define usi unsigned short
#define ull unsigned long long
#define ld long double
#define str string
#define pi pair<int, int>
#define pl pair<ll, ll>

#define vi vector<int>
#define vl vector<ll>
#define vb vector<bool>
#define vpi vector<pair<int, int>>
#define vvi vector<vi>

template<typename T1, typename T2>
ostream& operator<<(ostream &os, pair<T1, T2>& p) { return os << p.first << " " << p.second; }
template<typename T1, typename T2>
istream& operator>>(istream& in, pair<T1, T2>& p) { in >> p.first >> p.second; return in; }
template<typename T>
ostream& operator<<(ostream &os, vector<T>& v) { each(x, v) os << x << " "; return os; }
template<typename T>
istream& operator>>(istream& in, vector<T>& v) { each(x, v) in >> x; return in; }
template<typename random_it>
ostream& operator<<(ostream &os, pair<random_it, random_it> it) {
    while(it.first != it.second) os << *(it.first++) << " ";
    return os;
}
template<typename random_it>
istream& operator>>(istream& in, pair<random_it, random_it> it) {
    while(it.first != it.second) in >> it.first++;
    return in;
}
template<typename T>
bool even(const T& n) { return !(n % 2); }


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
