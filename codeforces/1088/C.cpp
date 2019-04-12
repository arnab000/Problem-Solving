#include<bits/stdc++.h>
using namespace std;
int main()
{
 int i,j,n,k,x=-1,d=0;
 cin>>n;
 vector<int>sura;
 for(i=0;i<n;i++)
 {
     cin>>k;

     sura.push_back(k);
 }
    cout<<n+1<<endl;
    cout<<1<<" "<<n<<" "<<100000<<endl;

for(i=0;i<n;i++)
 {
     cout<<2<<" "<<i+1<<" "<<(sura[i]-i)+100000<<endl;
 }

}
