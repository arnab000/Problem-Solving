#include <bits/stdc++.h>
using namespace std;
int m=27;
vector<int> sura[27];


int loser(int l,int r,int k)
{
	if(r<l)
		return 0;


long long	hashi= lower_bound(sura[k].begin(),sura[k].end(),l)-sura[k].begin();
	long long kana= upper_bound(sura[k].begin(),sura[k].end(),r)-sura[k].begin();
	return kana-hashi;
}


int main()
{
	long long test;

    cin>>test;
	while(test--)
	{
		for(int i=0;i<m;i++)
			sura[i].clear();
		int n;
	   cin>>n;
		for(int i=1;i<=n;i++)
		{
			long long k;
			cin>>k;
			sura[k].push_back(i);
		}
		int ans =0;
		for(int i=0;i<m;i++)
		{
		    int y=sura[i].size();
			ans = max(ans,y);
			int a,b,p,q;
			a = 0;
			b = sura[i].size()-1;
			while(a<b)
			{
				p = sura[i][a]+1;
				q = sura[i][b]-1;
				for(int k=1;k<m;k++)
				{
				    int ssura;
				    ssura=loser(p,q,k);
					ans = max(ans,2*(a+1)+ssura);
				}
				a++;
				b--;
			}

		}
		cout<<ans<<endl;
	}



}
