#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
const int N = 2E5+10;

char s[N];
int c[N][26];
int n,q;

int main()
{
	scanf("%s",s+1);
	n=strlen(s+1);
	for(int i=1;i<=n;i++)
	{
	    for(int j=0;j<26;j++)
	        c[i][j]=c[i-1][j];
		int v=s[i]-'a'; c[i][v]++;
	}

	scanf("%d",&q);
	while(q--)
	{
		int l,r; scanf("%d%d",&l,&r);
		if(l==r || s[l]!=s[r])
		{
			puts("Yes"); continue;
		}
		int Max=0;
	 	for(int i=0;i<26;i++)
		   if(c[r][i]-c[l-1][i]>0) Max++;
		if(Max>2) puts("Yes");
		else puts("No");
	}
}
