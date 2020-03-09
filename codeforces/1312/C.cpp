#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
 
#define ll long long
#define ldb long double
#define db double
#define str string
 
#define fr first
#define se second
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define mp make_pair
 
#define pi pair<int,int>
#define pll pair<ll,ll>
#define pdb pair<db,db>
#define pldb pair<ldb,ldb>
 
#define vi vector<int>
#define vll vector<ll>
#define vdb vector<db>
#define vldb vector<ldb>
#define vpi vector< pi >
#define vpll vector< pll >
 
#define mi map<int,int>
#define mll map<ll,ll>
#define mdb map<db,db>
#define mldb map<ldb,ldb>
 
 
#define forr(i,a,b) for (int i = (a); i < (b); ++i)
#define rrof(i,a,b) for (int i = (b)-1; i >= (a); --i)
 
 
const int MOD = 1e9+7;
const ldb PI = 4*atan((ldb)1);
 
ll power(ll a,ll n){
	ll res=1;
 
	while(n){
		if(n%2)
		res*=a;
		a*=a;
		n/=2;
	}
	
	return res;
}
 
int main(){
	fast;
	
	int t;
	cin>>t;
	
	while(t--){
		int n,k;
		cin>>n>>k;
		
		ll int a[n];
		forr(i,0,n)
		cin>>a[i];
		
		mll mpa;
		int f=0;
		
		forr(i,0,n){
			int cnt=0,e=1;
			
			while(e==1){
				if(a[i]==0)
				break;
				
				if(a[i]==1){
					if(mpa[0]==1){
						f=1;
						cout<<"NO";
						break;
					}
				}
				
				while(a[i]%k==0){
					a[i]=a[i]/k;
					cnt++;
				}
				
				if(mpa[cnt]==0)
				mpa[cnt]=1;
				
				else if(mpa[cnt]==1){
					f=1;
					cout<<"NO";
					break;
				}
				
				if(a[i]!=1){
					a[i]--;
					
					if(a[i]%k!=0){
						cout<<"NO";
						f=1;
						break;
					}
				}
				
				else if(a[i]==1)
				break;
			}
			
//			cout<<"Y";
			if(f==1)
			break;
		}
		
		if(f==0)
		cout<<"YES";
		
		cout<<"\n";
	}
	
	return 0;
}