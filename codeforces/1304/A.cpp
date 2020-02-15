#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin>>test;
    while(test--)
    {
       long long x,y,s,t;
       cin>>x>>y>>s>>t;
       long long k=y-x;
       long long m=s+t;
       if(k%m==0)
       {
           cout<<k/m<<endl;
       }
       else
        cout<<-1<<endl;
    }
}
