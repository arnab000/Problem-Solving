/*input
5
2 1 0 0 0
*/
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
/*
/////////////////////////////////// Prime Sieve
const ll size=1000000+1;
ll MOD=1e9+7,sieve[size];
void find_sieve(){
    for(int i=2;i<=size;i++){
        if(sieve[i]==0){
        for(int j=2*i;j<=size;j+=i) sieve[j]=1;
        }
    }
}
//////////////////////////////////// Fast modulo multiplication
ll fast_exp(ll base, ll expz) {
      ll res=1;
      while(expz>0) {
         if(expz%2==1) res=(res*base)%MOD;
         base=(base*base)%MOD;
         expz/=2;
      }
      return res%MOD;
}
///////////////////////////////////////// Segment tree 
ll default_val=-1e9;
ll tree[4*size+1],A[size];
ll f(ll a,ll b){
    return max(a,b);
} //comparator
void build(ll node,ll s_index,ll e_index){
    if(s_index==e_index) tree[node]=A[s_index];
    else{
        ll mid=(s_index+e_index)/2;
        build(2*node,s_index,mid);
        build(2*node+1,mid+1,e_index);
        tree[node]=f(tree[2*node],tree[2*node+1]);
    }
}
ll query(ll node, ll s_index, ll e_index, ll t_s, ll t_e){
    if(t_e<s_index||t_s>e_index) return default_val;
    else if(s_index>=t_s&&e_index<=t_e) return tree[node];
    else{
        ll mid=(s_index+e_index)/2;
        ll v1=query(2*node,s_index,mid,t_s,t_e);
        ll v2=query(2*node+1,mid+1,e_index,t_s,t_e);
        return f(v1,v2);
    }
}
void point_update(ll node,ll s_index,ll e_index,ll idx,ll val){
    if(idx<s_index||idx>e_index) return;
    
    if(s_index==e_index&&s_index==idx) {
        A[s_index]=f(A[s_index],val);
        tree[node]=f(tree[node],val);
    }
    else
    {
        ll mid=(s_index+e_index)/2;
        point_update(2*node,s_index,mid,idx,val);
        point_update(2*node+1,mid+1,e_index,idx,val);
        tree[node]=f(tree[2*node],tree[2*node+1]);
    }
}
/////////////////////////////////////////////// DSU
ll parent[1000000+1];
ll rankz[1000000+1];
ll find(ll x){
    while(x!=parent[x]) x=parent[x];
    return x;
}
void make_union(ll x,ll y){
    x=find(x);
    y=find(y);
    if(x==y) return;
    if(rankz[x]==rankz[y]){
        parent[y]=x;
        rankz[x]++;
    }
    else if(rankz[x]>rankz[y]){
        parent[y]=x;
        rankz[x]=max(rankz[x],1+rankz[y]);
    }
    else{
        parent[x]=y;
        rankz[y]=max(rankz[y],1+rankz[x]);
    }
}
//////////////////////////////////////////// Fenwick Tree(?)
ll tree[size];
ll n; //size of array
void point_update(ll idx,ll val){
    while(idx<=n){
        tree[idx]+=val;
        idx+=idx&-idx;
    }
}
ll point_query(ll idx){
    ll res=0;
    while(idx>0){
        res+=tree[idx];
        idx-=idx&-idx;
    }   
    return res;
}
void range_update(ll idx1,ll idx2,ll val){
    update(idx1,+val);
    update(idx2+1,-val);
}
*/
ll t;
ll n;
ll a[200001];
vector <ll> v;
ll vis[200001];
ll deg[200001];
vector <pair<ll,ll>> endz;
ll s,e;
void dfs(ll node){
    e=node;
    if(a[node]==0) return;
    dfs(a[node]);
}
void solve(){
    cin>>n;
    for(int i=1;i<=n;i++) {cin>>a[i]; deg[a[i]]++;}
    //for(int i=1;i<=n;i++) cout<<deg[i]<<" "; cout<<endl;
    for(int i=1;i<=n;i++){
        if(deg[i]==0){ 
            //cout<<i<<":"<<endl;
            s=i;
            dfs(i);
            
        endz.push_back({s,e});
        }
    }
    // for(auto it:endz){
    //     cout<<it.first<<" "<<it.second<<endl;
    // }
    for(int i=1;i<endz.size();i++){
        a[endz[i-1].second]=endz[i].first;
    }
    a[endz[endz.size()-1].second]=endz[0].first;
    for(int i=1;i<=n;i++) cout<<a[i]<<" "; cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}