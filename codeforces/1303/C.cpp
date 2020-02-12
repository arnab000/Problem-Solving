#include<bits/stdc++.h>

using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		bool make = true;
		string s,a="";
		cin>>s;
		int n = s.length();
		bool sura [26] = {0};
		for(int i=1;i<n;i++)
		{
			int x = (int)s[i-1]-'a';
			int y = (int)s[i] - 'a';
			if(i == 1)
			{
				a = s[i];
				if(s[i] != s[i-1])
					a = a+s[i-1];
				sura [x] = 1;
				sura [y] = 1;
			}
			else
			{
				if(sura [y] == 0)
				{
					if(a[0] == s[i-1])
					{
						a = s[i] + a;
					}
					else
					{
						a = a+s[i];
					}
					sura [y] = 1;
				}
			}
		}
		for(int i=1;i<n;i++)
		{
			bool temp = false;
			for(int j=1;j<a.length();j++)
			{
				if((s[i]==a[j]&&s[i-1]==a[j-1]) || (s[i]==a[j-1]&&s[i-1]==a[j]))
				{
					temp = true;
					break;
				}
			}
			if(temp == false)
				make= false;
		}
		if(make)
		{
			cout<<"YES"<<endl;
			for(int i=0;i<26;i++)
			{
				if(sura [i] == 0)
				{
					a+='a'+i;
				}
			}
			cout<<a<<endl;
		}
		else
			cout<<"NO"<<endl;;

	}
	return 0;
}
