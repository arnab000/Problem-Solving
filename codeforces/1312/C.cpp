#include<iostream>
#include<algorithm>
#include<queue>
#include<map>
#include<stdio.h>
#include<vector>
#include<cstring>
using namespace std;
long long a[200000];
long long ans;
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    long long t;
    cin>>t;
    while(t--)
    {
        
        memset(a,0,sizeof(a));
        long long vis=1;
       long long n,k;
       long long num;
       cin>>n>>k;
       for(long long i=0;i<n;i++)
        {
            long long len=0;
            cin>>num;
            while(num)
            {
                a[len]+=num%k;
                num/=k;
                if(a[len++]>1)
                {
                    vis=0;
                }
            }
 
        }
        if(vis==0)
            
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
 
 
    }
 
 
 
    
 
    return 0;
}