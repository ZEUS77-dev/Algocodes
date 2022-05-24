#include<bits/stdc++.h>
using namespace std;
#include <cmath>
using namespace std;
typedef long long int ll;
const ll INF = 1e9 + 7;
const ll MOD = 998244353;
const int N=1e5+10;
//definition files
#define loop(i, a, n) for (ll i = a; i < n; i++)
#define nl '\n'
#define all(x) (x).begin(),(x).end()
#define debug(x) cout << #x << " " << x << endl;
#define fix(prec) \{\cout<<setprecision(prec)<<fixed;\}
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ff first
 
//functions
void flg(int i){
    if (i == 0)
        cout << "NO" << nl;
    else if (i == 1)
        cout << "YES" << nl;}
 //DP array
 // 0 1 1 2 3 4 8
 	//func(n)-->> nth fib number
 int dp[N];
 //TOP DOWN APPROACH
 
 int fib(int n){
 	
 	if(n==0)return 0;
 	if(n==1)return 1;
 	if(dp[n]!= -1)return dp[n]; 
 	//memoisation
 	//this means that value is alreay stored for that val
 	return dp[n]=fib(n-1)+fib(n-2); // single line statement for assigning/storing as well as 
 	//returning the value
 }
void solve()
{
	memset(dp,-1,sizeof(dp)); //fills the dp array with -1s
	int x;
	cin>>x;
	int res= fib(x);
	cout<<res;
	
}
 
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
	
	return 0;
}