// header files//
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll INF = 1e9 + 7;
const ll MOD = 998244353;
// definition files//;
#define loop(i, a, n) for (ll i = a; i < n; i++)
#define pb(x) push_back(x)
#define nline '\n'
#define sz size()
#define ff first
#define ss second
#define each(a, x) for (auto &a : x)
#define all(x) (x).begin(), (x).end()
#define debug(x) cout << #x << " " << x << endl;
#define Vmax(x) *max_element(all(x))
#define Vmin(x) *min_element(all(x))
#define fix(prec) cout << setprecision(prec) << fixed;
#define charToInt(c) (c - '0')

void _print(ll t)
{
    cerr << t;
}
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(double t) { cerr << t; }
// Template Class//
template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.ff);
    cerr << ",";
    _print(p.ss);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(unordered_map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
// main//
// if sorted given always first think of any binary search approach then proceed
bool ispalin(string s){
   int i=0;
   int j=s.size()-1;
   while(i<j){
       if(s[i]!=s[j])return false;
       i++;j--;
       
   }
   return true;
}
int main()
{
    string s;
    cin>>s;
    if(ispalin(s))cout<<1;
    else cout<<0;
}
