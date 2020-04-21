#include<bits/stdc++.h>
using namespace std;
#define M int(1e9)
int main()
{
	/*#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif*/
	int t=1;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
	    int p=0,arr[n];
		long long sum=0;
		for(int i=0;i<n;i++)
			cin>>arr[i];
		int ma=-M;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]/abs(arr[i])==1)
        {
            while(i<n && arr[i]/abs(arr[i])==1)
            {
                ma=max(ma,arr[i]);
                i++;
            }
            if(i!=n)i--;
            sum+=ma;
        }
        if(arr[i]/abs(arr[i])==-1)
        {
            while(i<n && arr[i]/abs(arr[i])==-1)
            {
                ma=max(ma,arr[i]);
                i++;
            }
            if(i!=n)i--;    
            sum+=ma;
        }
        if(i!=n)ma=-M;
    }
		cout<<sum<<endl;
        
	}
	return 0;
}