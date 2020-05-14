#include<bits/stdc++.h>
    
using namespace std;
#define ll long long
#define f first
#define s second
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fo(a,b,c) for(int i=a;i<b;i+=c)  
int pow(int x,int y){
    int res=1;
    while(y){
        if(y&1) res*=x;
        y>>=1;
        x*=x;
    }
    return res;
}   
long long ans[500005];
int main()
{
    ll test;
    cin>>test;
    ans[1]=0;
    ll j=1;
    for(ll i=3;i<=500001;i+=2)
    {
        ll last =i-2;
        ans[i]=ans[last]+(2*i+last*2)*j;
        j++;

    }
    while(test--)
    {
       ll n;
       cin>>n;
       cout<<ans[n]<<endl;

    }
   
      
    
        

}