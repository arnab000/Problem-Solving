#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y,z,i,j,sum=0,sum1=0;


cin>>x;
for(i=0;i<x;i++)
{
    cin>>y;
    sum+=y;

}
for(i=0;i<x;i++)
{
    cin>>z;
    sum1+=z;

}
if(sum1>sum)
    cout<<"No"<<endl;
else cout<<"Yes"<<endl;

 }