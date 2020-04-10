#include<bits/stdc++.h>
using namespace std;
int t;
int p[203],c[203];
		int n;
int main()
{
	scanf("%d",&t);
	p[0]=0;
	c[0]=0;
	while(t--)
	{
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
		{
			scanf("%d%d",&p[i],&c[i]);
		}
		int flag=0;
		int mp=0,mc=0;
		for(int i=1;i<=n;i++)
		{
			if(p[i]>=mp&&c[i]>=mc&&p[i]>=c[i]&&mp>=mc&&p[i]-p[i-1]>=c[i]-c[i-1])
			{
				mp=max(mp,p[i]);
				mc=max(mc,c[i]);
				continue;
			}
			else 
			{
				flag=1;
				break;
			}
		}
		if(flag) puts("NO");
		else puts("YES");
	}
}
