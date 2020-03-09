#include<bits/stdc++.h>
#define INF 10737418240000000
#define ll long long
#define PI (2*acos(0.0))
#define Hare printf("here\n")
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define x first
#define y second
#define on(val,pos) val|(1<<pos)
#define off(val,pos) val&(~(1<<pos))
#define check(val,pos) (val&(1<<pos))
 
//first four adjacent,second four corner
//int row[8]={0,-1,0,1,1,-1,-1,1};
//int col[8]={-1,0,1,0,-1,-1,1,1};
using namespace std;
 
int main(){
    ll i,j,k,n,m,val,t=0,cnt,test;
    //freopen("000input.txt","r",stdin);
    cin>>test;
    while(test--){
        cin>>n>>k;
        ll arr[n+5];
 
        for(i=0;i<n;i++)scanf("%lld",&arr[i]);
        sort(arr,arr+n);
        ll ans=1LL;
        vector<ll> po;
        while(ans<=arr[n-1])po.pb(ans),ans*=k;
        po.pb(INF);
        map<ll,bool> done;
 
        i=0;
        while(arr[i]==0 and i<n)i++;
 
        for(;i<n;i++){
            while(arr[i]>0){
                ll l=0,r=po.size()-1,mid;
                while(l<=r){
                    mid=(l+r)/2;
                    if(po[mid]<=arr[i] and po[mid+1]>arr[i])break;
                    else if(po[mid]>arr[i])r=mid-1;
                    else l=mid+1;
                }
 
                if(l>r or done[po[mid]]==true)break;
                else arr[i]-=po[mid],done[po[mid]]=true;
            }
 
            if(arr[i]>0)break;
        }
        if(i<n)printf("NO\n");
        else printf("YES\n");
    }
    //free();   //if pointer array
    return 0;
}