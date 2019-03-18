
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,a,b,c;
    cin>>x>>y;
    a=x;
    b=x+1;
 if(y-1>=x-y)
    c=(x-y)+x-1;
 else
    c=y-1+x-1;
    cout<<a+b+c<<endl;

}
