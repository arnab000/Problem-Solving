#include<bits/stdc++.h>
    
using namespace std;
#define ll long long
#define f first
#define s second
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fo(a,b,c) for(int i=a;i<b;i+=c)  
typedef pair<ll , pair<ll, ll> > pi;
ll po(ll x,ll y){
     ll  res=1;
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
char a[1005][1005];
int t, n, m, x, y;
int main(){
 ll test;
 cin>>test;
while(test--)
{
	        int k=0;
        cin >> n >> m >> x >> y;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                {
                    cin >> a[i][j];
                    if(a[i][j]=='.')
                        k++;
                }
        if(2*x<=y)
        {
            cout << k*x << endl;
        }
        else
        {
            int c=0;
            for(int i=0;i<n;i++)
                for(int j=0;j<m;j++)
                    if(a[i][j]=='.')
            {
                if(j!=m-1 && a[i][j+1]=='.')
                {
                    c+=y;
                    a[i][j]='#';
                    a[i][j+1]='#';
                }
                else
                {
                    c+=x;
                    a[i][j]='#';
                }
            }
            cout << c << endl;
        }
}
}






   
      
    
        

