#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long n,k,i,l;
  long long sum,ans=0;
    cin>>n;
    if(n>1){
    cin>>k;
    cin>>l;
    sum=__gcd(k,l);

    for(i=2;i<n;i++)
    {
        cin>>k;
  sum=__gcd(sum,k);

    }
    }
    if(n==1)
    {
        cin>>k;
        sum=k;
    }
    
    for( i=1;i<=sqrt(sum);i++){

        if(sum%i==0){
            if((sum/i)==i)
                ans+=1;
            else
                ans+=2;
        }
    }
    cout<<ans<<endl;




}
