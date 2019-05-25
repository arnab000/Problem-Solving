#include<bits/stdc++.h>
using namespace std;


int main()
{
 long long a,b,i,j,k=0,ans=0,n,l;
 vector<long long >sura;
cin >>n;
for(i=0;i<n;i++)
{
    cin>>l;
    if(l<0)
        l=-l;
    sura.push_back(l);
}
sort(sura.begin(),sura.end());

for(i=0;i<n;i++)
{

    while(k<n && sura[k]<=sura[i]*2)
    {
        k++;
    }
 
    ans+=k-i-1;
}
cout<<ans<<endl;

}
