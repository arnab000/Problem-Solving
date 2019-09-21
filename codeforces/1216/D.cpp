#include<bits/stdc++.h>
using namespace std;
int main()
{


    long long n,k;
    cin>>n;
  long long maxi=0,gcd=0,ans=0;
  vector<long long>sura;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        sura.push_back(k);
        maxi=max(k,maxi);
    }
    gcd=0;
        for(int i=0;i<n;i++)
    {
       ans+=maxi-sura[i];
       gcd=__gcd(gcd,maxi-sura[i]);

    }



    cout<<ans/gcd<<" "<<gcd<<endl;



}
