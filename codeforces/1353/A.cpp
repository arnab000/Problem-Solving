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

int main()
{
    ll test;
    cin>>test;
    while(test--)
    {
       long long n,k;
       cin>>n>>k;
       if(n==1)
       {
           cout<<0<<endl;
       }
      else  if( n==2)
       {
           cout<<k<<endl;

       }
       else
       {
           cout<<2*k<<endl;
       }
       

    }
   
      
    
        

}