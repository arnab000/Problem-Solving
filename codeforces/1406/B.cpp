    #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    constexpr int Inf = 2000000010;
    constexpr ll INF= 2000000000000000000;
    constexpr ll MOD = 1000000007;
    const double PI = 3.1415926535897;
    typedef pair<int,int> P;
    typedef pair<int,P> PP;
    #define ll long long
#define f first
#define s second
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef pair<ll , pair<ll, ll> > pi;
     int pow(int x,int y){
    int res=1;
    while(y){
        if(y&1) res*=x;
        y>>=1;
        x*=x;
    }
    return res;
}   
struct Compare {
    constexpr bool operator()(pi const & a,
                              pi const & b) const noexcept
    { return a.first < b.first || (a.first == b.first && a.second.first > b.second.first); }
 
};
void prefix_function( string s,ll arr[] )
{
     long long border=0; arr[0]=0;
    for(long long i=1;i<s.size();i++)
    {
      while(border>0 && s[i]!=s[border])
        border=arr[border-1];
     
     if(s[i]==s[border])
         border++;
      else
       border=0;
      
      arr[i]=border;
    }
}//send mod-2 for a^-1 if mod is a prime number

ll mod=998244353;
ll add( ll a , ll b)
{
    return (((a%mod)+(b%mod))%mod);
}
ll mul(ll a,ll b)
{
  return (((a%mod)*(b%mod))%mod);
}
ll binpow(ll a, ll b) {
    ll res = 1;
    while (b) {
        if (b & 1) res = mul(res, a);
        a = mul(a, a);
        b >>= 1;
    }
    return res;
}
ll subs(ll a,ll b)
{
    return (((a%mod)-(b%mod)+mod)%mod);
}
ll dv(ll a,ll b)
{
    ll inv=binpow(b,mod-2);
    return mul(a,inv);
}

ll dsu_arr[100000];
ll dsu_sz[100000];
void dsu(ll n)
{
    for(ll i=0;i<=n;i++)
    {
        dsu_arr[i]=i;
        dsu_sz[i]=1;
    }
}
ll find(ll x)
{
     ll root=x;
    while (root!=dsu_arr[root])
    {
        root=dsu_arr[root];
    }
    while(x!=dsu_arr[x])
    {
        dsu_arr[x]=root;
        x=dsu_arr[x];
    }
    return root;
}
ll merge(ll x,ll y)
{
    ll root1=find(x);
    ll root2=find(y);
    
    if(root1==root2)
    return 0ll;
 
    if(dsu_sz[x]>dsu_sz[y]){
    dsu_arr[root2]=root1;
    dsu_sz[root1]+=dsu_sz[root2];
    }
    else
    {
         dsu_sz[root2]+=dsu_sz[root1];
        dsu_arr[root1]=root2;
    }
    return 1ll;
}
    template<class T> inline bool chmax(T& a, T b) {
        if (a < b) {
            a = b;
            return 1;
        }
        return 0;
    }
     
    template<class T> inline bool chmin(T& a, T b) {
        if (a > b) {
            a = b;
            return 1;
        }
        return 0;
    }
     
    void md(ll &val, ll M) {
        val = val % M;
        if(val < 0) {
            val += M;
        }
    }
     
    template<typename T>
    T RS(T N, T P, T M){
        if(P == 0) {
            return 1;
        }
        if(P < 0) {
            return 0;
        }
        if(P % 2 == 0){
            ll t = RS(N, P/2, M);
            if(M == -1) return t * t;
            return t * t % M;
        }
        if(M == -1) {
            return N * RS(N,P - 1,M);
        }
        return N * RS(N, P-1, M) % M;
    }
     
    int main() {
        ll test;
        cin>>test;
        while(test--){
        int N,K;
        cin >> N ;
        K=5;
        vector<ll> not_minus;
        vector<ll> minus;
        for(int i = 0;i < N;i++) {
            ll A;
            cin >> A;
            if(A >= 0) {
                not_minus.push_back(A);
            }
            else {
                minus.push_back(A);
            }
        }
        if(K == N) {
            ll ret = 1;
            for(int i = 0;i < not_minus.size();i++) {
                ret *= not_minus.at(i);
               
            }
            for(int i = 0;i < minus.size();i++) {
                ret *= minus.at(i);
               
            }
            cout << ret << endl;
        }
        else if(minus.size() == N && K % 2 == 1) {
            sort(minus.begin(),minus.end());
            reverse(minus.begin(),minus.end());
            ll ret = 1;
            for(int i = 0;i < K;i++) {
                ret *= minus.at(i);
              
            }
            cout << ret << endl;
        }
        else {
            sort(not_minus.begin(),not_minus.end());
            reverse(not_minus.begin(),not_minus.end());
            sort(minus.begin(),minus.end());
            not_minus.push_back(0);
            minus.push_back(0);
            not_minus.push_back(0);
            minus.push_back(0);
            ll ret = 1;
            int itr1 = 0;
            int itr2 = 0;
            int Sum = 0;
            while(true) {
                if(Sum == K) {
                    break;
                }
                else if(Sum == K - 1) {
                    ret *= not_minus.at(itr1);
                    
                    break;
                }
                else {
                    ll cnt1 = not_minus.at(itr1) * not_minus.at(itr1 + 1);
                    ll cnt2 = minus.at(itr2) * minus.at(itr2 + 1);
                    if(cnt1 >= cnt2) {
                        ret *= not_minus.at(itr1);
                     
                        itr1++;
                        Sum++;
                    }
                    else {
                        ret *= minus.at(itr2);
                      
                        ret *= minus.at(itr2 + 1);
                      
                        itr2 += 2;
                        Sum += 2;
                    }
                }
            }
            cout << ret << endl;
        }
        }
    }