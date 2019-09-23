#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,c,d;
cin>>a>>b>>c>>d;
if(a+b==c+d||a+d==c+b|| a+c==b+d )
    cout<<"YES"<<endl;
else if(a+b+c==d||a+b+d==c||a+c+d==b||d+b+c==a)
     cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;



}
