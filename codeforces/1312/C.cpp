#include <bits/stdc++.h>
using namespace std;
 
 
#define endl '\n'
#define ll long long
#define sc(a) scanf("%d",&a)
#define scl(a) scanf("%lld",&a)
#define mem(a , v)  memset(a , v , sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
 
const int MAX = 1e5+55;
const int INF = 1e9+77;
const int MOD = 1e9+7;
const double PI = acos(-1.0);
vector<int> months = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
 
 
ll power(ll x,ll y){
         if(y==0)
         return 1;
         ll s=power(x,y/2);
         s*=s;
         if(y%2==1)
         s*=x;
         return s;
}
 
ll gcd (ll a, ll b) {
return b ? gcd (b, a % b) : a;
}
 
ll fac(ll x){
         ll p=1;
         for(ll i=2;i<=x;i++){
         p*=i;
         }
         return p;
}
 
 
 
 
 
 
int main(){
 
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
//freopen("input.txt" , "r" , stdin);
//freopen("output.txt" , "w" , stdout);
 
 
    int t;
    cin>>t;
 
 
 
 
   while(t--){
 
       ll n,k;
       cin>>n>>k;
 
       ll x[n];
       ll max1=0;
       for(int i=0;i<n;i++){
        cin>>x[i];
        max1=max(x[i],max1);
       }
 
       
 
       ll y[MAX];
       bool is[MAX];
 
       for(int i=0;i<MAX;i++){
        y[i]=0;
        is[i]=0;
       }
 
       int pos=0;
       for(ll i=0;i<MAX;i++){
        y[i]=power(k,i);
        pos=i+1;
        if(y[i]>max1){
            break;
        }
       }
 
       
 
 
 
 
 
 
       bool t=1;
       for(int i=0;i<n;i++){
         if(x[i]==0){continue;}
         bool h[MAX];
         for(int j=0;j<pos;j++){
            h[j]=0;
         }
 
         ll cur=x[i];
         for(int j=pos;j>=0;j--){
            if(cur>=y[j]&&!is[j]){
              cur-=y[j];
              h[j]=1;
            }
         }
 
         if(cur==0){
            for(int j=0;j<pos;j++){
                if(h[j]){
                    is[j]=1;
                }
            }
         }
         else{
            t=0;
            break;
         }
 
 
       }
       
       
       
 
       if(t){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
 
 
   }
 
 
     return 0;
 
}
 