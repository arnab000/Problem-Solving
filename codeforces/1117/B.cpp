#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long int n,k,l,m,i,j,h;
   vector<long long>v;
   cin>>n>>k>>l;
   for(i=0;i<n;i++)
   {
       cin>>m;
       v.push_back(m);
   }
   j=k/(l+1);
   h=k-j;
   sort(v.begin(),v.end());
   cout<<v[n-1]*h+v[n-2]*j<<endl;




}
