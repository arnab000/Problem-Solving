#include<bits/stdc++.h>
using namespace std;
#define dofast ios::sync_with_stdio(false);cin.tie(0);
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define ld long double
#define MAX 100000
bool comparator(pair<ll,ll> a,pair<ll,ll> b){
}
 
vector<int>divs;
set<int>pr[100005];
bool vis[MAX+1];
void get_all(){
    for(int i=1;i<=100001;i++)
    {
        for(int j=1; j*j<=i;j++)
        {
            if(i%j==0)
            {
                int num=(i/j);
                if(num!=j)
                pr[i].insert(num);
                pr[i].insert(j);
            }
        }
    }
 
 
 
}
 
 
 
int main()
{
    dofast
    get_all();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        //vector<ll>vec(n);
        ll arr[n+2];
        int chk[n+2];
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            chk[i]=1;
        }
        int ans=1;
        for(int i=2;i<=n;i++){
            int tempans=1;
            for(auto it=pr[i].begin();it!=pr[i].end();it++){
                if(arr[*it]<arr[i]){
                    tempans=max(tempans,chk[*it]+1);
                    //cout<<tempans<<endl;
                }
            }
            chk[i]=tempans;
            ans=max(ans,tempans);
 
        }
        cout<<ans<<endl;
    }
    return 0;
}