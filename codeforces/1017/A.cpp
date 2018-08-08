
#include<bits/stdc++.h>
using namespace std;
int main()
{

int x,y,z,j,i,m=0,l=1,sum=0,sum2=0;
cin>>x;
for(i=0;i<x;i++)
{
    m++;
sum2=0;
    vector<int>a;
    for(y=0;y<4;y++)
    {
        cin>>z;
        a.push_back(z);
        if(m==1)
        {
            sum+=a[y];
        }
        else
        {
            sum2+=a[y];
        }
       }
       if(sum<sum2)
        l++;


}
cout<<l;


}
