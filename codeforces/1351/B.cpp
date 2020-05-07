#include<bits/stdc++.h>
using namespace std;
int main()
{

 long long test;
 cin>>test;
 while(test--)
 {
    long long x,y,a,b;
    cin>>x>>y>>a>>b;
    long long m=max(x,y);
    long long n=max(a,b);
    long long l=min(x,y);
    long long r=min(a,b);
    if(m==n && l+r==m)
    {
    cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;



 }


}
