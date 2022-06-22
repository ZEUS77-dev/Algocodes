//header files//
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
#define debug(x) cout << #x << " "<< x << endl;
#define Vmax(x) *max_element(all(x))
#define Vmin(x) *min_element(all(x))
#define fix(prec) cout << setprecision(prec) << fixed;
#define charToInt(c) (c - '0')
 
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}
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
 
//main// 
vector<int> rabin_karp(string& T,string& P){
    int n=T.size();//size text
    int m=P.size();//size pattern
    int q=INF;
    int x=11; //prime multiplier
    int x_m=1; // x^(m-1)used for next hash computation storing prev hash val
    int hash_P=0; //hash pattern 
    int hash_T=0; //hash text
    vector<int> ans;
    for(int i=0;i<m-1;i++){
        x_m=(x_m*x)%q;
    }
    for(int i=0;i<m;i++){
           hash_P=(hash_P*x+P[i])%q;
           hash_T=(hash_T*x+T[i])%q;
    }
    for(int i=0;i<n-m+1;i++){
        if(hash_P==hash_T){
            //possibility of match
            bool found =true;
            for(int j=0;j<m;j++){
                if(P[j]!=T[i+j]){
                    found=false;
                    break;
                }
            }
            if(found)ans.push_back(i);
        }
        //if it was not last windows ,then continue hash computation
        if(i<n-m){
            hash_T=(x*(hash_T - T[i]*x_m ) +T[i+m]);
            if(hash_T<0)
            hash_T+=q;
        }
    }
    return ans;
    
}
int main(){
  
  string T="AAABCAAABCAADAABAABCAB";
  string P="ABCA";
  vector<int> ans=rabin_karp(T,P);
  for(auto val:ans){
    cout<<val<<" "<<nline;
  }
    return 0;
}