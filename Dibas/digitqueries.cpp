#include<bits/stdc++.h>
using namespace std;

#define db(x) cout<<x<<'\n'
#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define repi(i,n) for(int i=0;i<(n);++i)
//#define repA(i,a,n) for(int i=a;i<=(n);++i)
//#define repD(i,a,n) for(int i=a;i>=(n);--i)
#define ll long long int
#define endl '\n'
#define lld long long double
#define vi vector<int> 
#define vl vector<ll> 
#define vb vector<bool> 
#define vvi vector<vector<int>  >
#define err(t) cout<<"Error : "<<t<<endl;
#define all(v) v.begin(),v.end()
#define mp make_pair
#define M 100000
#define MD 1000000007 //998244353
#define pb push_back
#define rep(i,a,b) for(ll i = a; i <= (b); i++)
#define pii pair<int,int>
#define pll pair<ll,ll> 
#define vec(a) vector<a >
#define se second
#define fi first
#define inf 0xffffffff
#define inchar getchar_unlocked
#define outchar(x) putchar_unlocked(x)

#define goo	cout<<"Case #"<<x<<": ";
//template <typename T>
//using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
ll binpow(ll a,ll b){	if(a==0) return 0; if(b==0) return 1;ll ans=1;while(b>0){if(b&1) ans=ans*a; a=a*a; b=b>>1;}	return ans;}
template <typename T> 
T Min(T a,T b){ return a<b?a:b; }
template <typename T>
T Max(T a,T b){ return a>b?a:b; }

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	// int n;cin>>n;
	// string s;cin>>s;
	
	//ll n;cin>>n; vl a(n); repi(i,n) cin>>a[i];
	ll x=0;ll d=1,t=1;
	vl v(1,0);
	repi(i,17) {
		x+=9*d*t;
		//db(x);
		v.pb(x);
		d++;
		t*=10;
	}
	
	
	
	int test1;cin>>test1;while(test1--){ 
		ll n;cin>>n;
		
		int x=lower_bound(all(v),n)-v.begin();
		int d=x;
		x--;
		//db3(x,d,v[x]);
		n-=v[x];
		ll R=1;
		while(x--) R*=10;
		ll k=n/d+R-1;
		//cout<<k<<" ";
		if(n%d){
			k++;
			string t=to_string(k);
			db(t[n%d-1]);
		}
		else db(k%10);	
	 }
	 //*/
return 0;
}

