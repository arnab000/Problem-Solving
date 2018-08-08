
#include<bits/stdc++.h>
using namespace std;
int main()
{

long long x,y,i,m=0,l=0,sum=0,sum2=0,q=0,e=0,f;
char z,j;
cin>>x;

    vector<char>a;
    for(y=0;y<x;y++)
    {
        cin>>z;
        a.push_back(z);
        if(a[y]=='1')
            sum++;
            else
            sum2++;

       }
     vector<char>b;
for(i=0;i<x;i++)
{
    cin>>j;
    b.push_back(j);

}
for(l=0;l<x;l++)
{
    if(b[l]=='0' && a[l]=='0')
        q++;
    if(b[l]=='0' && a[l]=='1')
        e++;
}
f=q*sum+((sum2-q)*e);

cout<<f<<endl;

}
