

#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long i,j,x,y,n,l,sum=0;
   cin>>n;
vector<long long >v;
for(i=0;i<n;i++)
{
    cin>>x;
    v.push_back(x);
}
for(j=0;j<n;j++)
{ sum=0;
    for(i=0;i<n;i++)
        {
        if(i%2==0 && v[i]!=n-1)
        v[i]=v[i]+1;
    else if(i%2==0 && v[i]==n-1)
        v[i]=0;
    else if(i%2!=0 && v[i]!=0)
        v[i]=v[i]-1;
    else if(i%2!=0 && v[i]==0)
        v[i]=n-1;
        }
for(i=0;i<n;i++)
{if(i==v[i])
sum++;}
if(sum==n)
{
    break;
}
}
if(sum==n)
    cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
