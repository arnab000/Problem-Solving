#include <bits/stdc++.h>
/*#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>*/
 
#define pll              pair <long long,long long>
#define pb               push_back
#define ll               long long
#define ff               first
#define ss               second
#define D(x)             cerr<<#x " = "<<(x)<<endl
#define vll              vector <ll>
#define IOS              ios_base::sync_with_stdio(0); cin.tie(NULL);
#define endl             '\n'   
using namespace std;
int main()
{
    IOS
 	// freopen("input.txt","r",stdin);
 	// freopen("output.txt","w",stdout);
 	// freopen("error.txt","w",stderr);
 	ll n;
 	cin>>n;
 	ll f[n];
 	set<ll>rec;
 	for(ll i=0;i<n;i++)
 	{
 		rec.insert(i);
 	}
 	for(ll i=0;i<n;i++)
 	{
 		cin>>f[i];
 		f[i]--;		
 		if(f[i]!=-1)
 		{
 		rec.erase(rec.find(f[i]));
 		}
 	}	
 	for(ll i=0;i<n;i++)
 	{
 		if(f[i]==-1 && rec.find(i)!=rec.end())
 		{	
 			ll top=*rec.begin();
 			if(top==i)
 			{
 				top=*rec.rbegin();
 			}
 			rec.erase(top);
 			f[i]=top;
 		}
 	}
 	for(ll i=0;i<n;i++)
 	{
 		if(f[i]==-1)
 		{	
 			ll top=*rec.begin();
 			if(top==i)
 			{
 				top=*rec.rbegin();
 			}
 			rec.erase(top);
 			cout<<top+1<<" ";
 		}
 		else
 		{
 			cout<<f[i]+1<<" ";
 		}
 	}
 	cout<<endl;
    return 0;
}