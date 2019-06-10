#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,a,i,t;
    cin>>t;
    while(t--){
            long long ans=0;
    cin>>n;
   while(1){
    if(n%2==0){
        n=n/2;
        ans++;
    }
    else if(n%3==0)
    {
        n=(2*n)/3;
        ans++;
    }
    else if(n%5==0)
    {
        n=(4*n)/5;
        ans++;
    }
    else if(n%2!=0 && n%3!=0 && n%5!=0){
        if(n==1)
            cout<<ans<<endl;
            else
                cout<<"-1"<<endl;
        break;

    }
   }
}
}
