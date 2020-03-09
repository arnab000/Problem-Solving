#include<bits/stdc++.h>
using namespace std;
typedef		long long       ll;
typedef		vector<ll>      vll;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		zz(v)           (ll)v.size()
#define		mms(ar,a)       memset(ar,a,sizeof(ar))
#define		ss              ' '
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
#define		OO              100000000000000000
 
int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,c=0,i,j,t,k,lie,m,n,o,x,y,z,p=0;
    S(t);
    while(t--){
        vll v,vv;
        a=1;
        ll ar[33],cnt=0;
        ll tp[100]={0};
        SS(n,k);
        for(i=0;i<n;i++) S(ar[i]);
        while(a<=OO){
            v.pb(a);
            a*=k;
        }
        for(i=0;i<n;i++){
            if(ar[i]!=0){
                bool bb=binary_search(all(v),ar[i]);
                if(bb){
                    auto it=lower_bound(all(v),ar[i]);
                    z=it-v.begin();
                    vv.pb(z);
                }
                else{
                    vll vt;
                    ll sm=0,p=0;
                    x=ar[i];
                    while(x){
                        auto it=upper_bound(all(v),x);
                        z=it-v.begin()-1;
                        vt.pb(z);
                        x-=v[z];
                        if(z<0) break;
                    }
                    if(x==0){
                        for(j=0;j<zz(vt);j++){
                            vv.pb(vt[j]);
                        }
                    }
                    else{
                        cout<<"NO"<<nn;
                        p=1;
                        break;
                    }
                }
 
            }
 
        }
        if(p==1) continue;
        sort(all(vv));
        ll pp=0;
        for(i=1;i<zz(vv);i++){
            if(vv[i]==vv[i-1]){
                cout<<"NO"<<nn;
                pp=1;
                break;
            }
        }
        if(pp==1) continue;
        cout<<"YES"<<nn;
    }
 
    return 0;
}