#include "bits/stdc++.h"
using namespace std;
 
using ll = long long;
 
ll nearest(ll x, int base){
  int ret = 0;
  for(int i = 0; i < 60; i++){
    if(pow(base, i) > x){
      ret = i - 1;
      break;
    }
  }
  return ret;
}
 
bool bad = 0;
 
vector<int> get(ll x, int base){
  vector<int> v;
  while(x >= base){
    int xx = nearest(x, base);
    v.push_back(xx);
    x -= pow(base, xx);
  }
  if(x == 1){
    v.push_back(0);
    x--;
  }
  if(x != 0){
    bad = 1;
  }
  return v;
}
 
int main(int argc, char const *argv[])
{
//  freopen("in.txt", "r", stdin);
  int t;
  scanf("%d", &t); 
  while(t--){
    bad = 0;
    int n, base;
    scanf("%d %d", &n, &base);
    vector<ll> a(n);
    vector<int> cnt(61);
    for(int i = 0; i < n; i++){
      scanf("%lld", &a[i]);
      if(a[i] == 0)continue;
      vector<int> ret = get(a[i], base);
      for(auto j : ret){
        cnt[j]++;
      }
    }
    if(bad == 1){
      printf("NO\n");
    }else {
      for(int i = 0; i <= 60; i++){
        if(cnt[i] > 1){
          bad = 1;
          break;
        }
      }
      if(bad){
        printf("NO\n");
      }else {
        printf("YES\n");
      }
    }
  }
 
  return 0;
}