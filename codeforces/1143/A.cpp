#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m,k,l,i;
cin>>n;
for(i=1;i<=n;i++)
{
    cin>>m;
    if(m==0)
        k=i;
    else if(m==1)
    l=i;

}
cout<<min(k,l)<<endl;
}
