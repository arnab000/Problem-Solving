#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
 
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    long long int t;
    cin>>t;
    while(t--)
	{
		
		long long int n,k;
		cin>>n>>k;
		long long int a[n];
		int flag = 0;
		map<long long int,long long int> mp;
		for(int i = 0;i<n;i++)
		{
			cin>>a[i];
			
		}
		
 
		for(int i = 0;i<n;i++)
		{
			vector<long long int> v; 
		 	long long int x;
		 	x=a[i];
		 	if(x==0)
		 		continue;
		 	//cout<<x<<": ";
			while (x > 0)  
			{ 
			    v.push_back(x % k); 
			    x = x / k; 
			} 
			long long int num = 0;
			for (int i = 0; i < v.size(); i++)  
			{ 
			    if (v[i] == 1)  
			    { 
			        num = num + (long long int)pow(k,i); 
			        if(mp[i]!=0)
			       	{
			       		flag=1;
			       		break;
			       	}
			      	mp[i]=1;
			    } 
			}
 
			//cout<<"\n";
			if(flag==1)
			{
				//cout<<"a";
				break;
			}
			if(num != a[i])
			{
				
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			cout<<"NO\n";
		}
		else
			cout<<"YES\n";
 
 
 
 
		
	}
    return 0;
}