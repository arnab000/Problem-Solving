#include<iostream>
#include<cstdio>
#define int long long
using namespace std;
int D=1,num[202200],front[200200],back[200200];
int n,k,x,ans;
signed main()
{
	cin>>n>>k>>x;
	for(int i=1;i<=k;i++)
		D*=x;
	for(int i=1;i<=n;i++)
	{
		cin>>num[i];
		front[i]=front[i-1]|num[i];
	}

	for(int i=n;i>=1;i--)
		{back[i]=back[i+1]|num[i];}
		
		
	for(int i=1;i<=n;i++)
		ans=max(ans,front[i-1]|back[i+1]|num[i]*D);
	cout<<ans<<endl;
	return 0;
}
