
#include<bits/stdc++.h>
    
using namespace std;
#define ll long long
#define f first
#define s second
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fo(a,b,c) for(int i=a;i<b;i+=c)  
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
 

int main()
{
    ll test;
    cin>>test;
    while(test--)
    {
           int n,m,a,b;
            cin>>n>>m>>a>>b;
            int t[n+3][m+3];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++) 
        t[i][j]=0;
    }
    if(n*a!=m*b)
    {
        cout<<"NO"<<endl;
        continue;
    }
    else cout<<"YES"<<endl;
    int p = 0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=a;j++)
        {
            p++;
            if(p==m+1) 
            p = 1;
            t[i][p]=1;
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<t[i][j];
        }
        cout<<endl;
    }
        


    }
    


}



   
      
    
        

