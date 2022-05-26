//header files//
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
const ll INF = 1e9 + 7;
const ll MOD = 998244353;
// definition files//;
#define loop(i, a, n) for (ll i = a; i < n; i++)
#define pb(x) push_back(x)
#define nl '\n'
#define sz size()
#define fi first
#define se second
#define each(a, x) for (auto &a : x)
#define all(x) (x).begin(), (x).end()
#define debug(x) cout << #x << " "<< x << endl;
#define Vmax(x) *max_element(all(x))
#define Vmin(x) *min_element(all(x))
#define fix(prec) cout << setprecision(prec) << fixed;
#define charToInt(c) (c - '0')
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
 //Template Class//
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
  //Main Function//
int main()
{
 ios_base::sync_with_stdio(false);cin.tie(NULL);
 int t = 1;
 cin >> t;
 while (t--)
  {
     //start her//
    ll n;
    cin>>n;
    debug(n)
  }

  return 0;
}
