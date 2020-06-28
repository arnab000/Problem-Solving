#include<bits/stdc++.h>
    
using namespace std;
#define ll long long
#define f first
#define s second
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fo(a,b,c) for(int i=a;i<b;i+=c)  
typedef pair<int, int> pi;
int pow(int x,int y){
    int res=1;
    while(y){
        if(y&1) res*=x;
        y>>=1;
        x*=x;
    }
    return res;
}   

void prefix_function( string s,ll arr[] )
{
    
   
    long long border=0;
    arr[0]=0;
    for(long long i=1;i<s.size();i++)
    {
      while(border>0 && s[i]!=s[border])
      {
          border=arr[border-1];
      }
      if(s[i]==s[border])
      {
          border++;
      }
      else
      {
          border=0;
      }
      arr[i]=border;
      
    }
    

}



int main()
{
 
        int n, k;
        cin >> n >> k;
        vector<pair<ll, pi> > hbe;
        for(int i=0; i<n; i++){
            int a, b;
            ll tt;
            cin >> tt >> a >> b;
            hbe.push_back({tt, {a, b}});
        }
        sort(hbe.begin(), hbe.end());
        queue<ll> both, ali, bob;
        for(int i=0; i<n; i++){
            if(hbe[i].second.first && hbe[i].second.second){
                both.push(hbe[i].first);
            }
            else if(hbe[i].second.first){
                ali.push(hbe[i].first);
            }
            else if(hbe[i].second.second){
                bob.push(hbe[i].first);
            }
        }
        ll ans = 0;
        int sura = 0;
        bool kutta = false;
        while(1){
            if(sura == k) break;
            ll a, b;
            if(both.empty() && (ali.empty() || bob.empty())){
                kutta = true;
                break;
            }
            else if(both.empty()){
                b = ali.front();
                b += bob.front();
                ans += b;
                ali.pop();
                bob.pop();
                sura++;
            }
            else if(ali.empty() || bob.empty()){
                ans += both.front();
                both.pop();
                sura++;
            }
            else{
                a = both.front();
                b = ali.front();
                b += bob.front();
                if(a < b){
                    ans += a;
                    both.pop();
                }
                else{
                    ans += b;
                    ali.pop();
                    bob.pop();
                }
                sura++;
            }
        }
        if(kutta){
            printf("-1\n");
        }
        else{
            cout << ans << "\n";
        }

}



   
      
    
        

