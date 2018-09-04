

#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long i,j,x,y,k,l,sum=0;
   cin>>k>>l;
vector<long long >v;
for(i=0;i<k;i++)
{
    cin>>x;
    v.push_back(x);
}
sort(v.begin(),v.end());
y=k/2;
if(l>v[y]){
for(i=y;i<k;i++)
{
    if(v[i]>=l)
        break;
    sum+=(l-v[i]);
}
cout<<sum;

}
else if(l<v[y])
{
    for(i=y;i>=0;i--)
{
    if(v[i]<=l)
        break;
    sum+=(v[i]-l);
}
cout<<sum;
}
else cout<<"0";
}
