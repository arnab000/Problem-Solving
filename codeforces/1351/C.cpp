#include<bits/stdc++.h>
using namespace std;


int main()
{
   long long test;
   cin>>test;
   while(test--)
   {
  string s;
  cin>>s;

	long long ans=0;
	set<pair<pair<int,int>,pair<int,int>>> m;
	int x=0, y=0;
  for(long long i=0;i<s.size();i++)
{
		int a=x, b=y;
		char yy=s[i];
		if(yy=='N')
			y++;
		if(yy=='S')
			y--;
		if(yy=='E')
			x--;
		if(yy=='W')
			x++;
		int c=x, d=y;
		if(m.find({{a,b},{c,d}})==m.end())
			ans+=5;
		else ans+=1;
		m.insert({{a,b},{c,d}});
		m.insert({{c,d},{a,b}});

}

cout<<ans<<endl;

   }
}

