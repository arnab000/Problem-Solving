#include <bits/stdc++.h> 
 
using namespace std;
using ll=long long;
using ull=unsigned long long;
using pii=pair<int,int>;
 
#define INF LONG_MAX
#define MOD 1000000007
#define rng(a) a.begin(),a.end()
#define rrng(a) a.end(),a.begin()
#define endl "\n"
 
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
 
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    bool ok=false;
    for(int i=0;i<n;i++){
      for(int j=i+2;j<n;j++){
        if(a[i]==a[j])ok=true;
      }
    }
    if(ok)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
  return 0;
}