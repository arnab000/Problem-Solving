#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define fori(x) for(ll i=0; i<x; i++)
#define mp make_pair
#define pb push_back
 
 
int main(){
 
      ll t;
      cin >> t;
      while(t--){
            ll n, k;
            cin >> n >> k;
            // cout << n << " " << k << endl;
            vector<ll> v(n, 0), a(n, 0);
            bool all_zero = true;
            fori(n){
                  cin >> a[i];
                  if(a[i] != 0)
                        all_zero = false;
            }
            if(all_zero){
                  cout << "YES\n";
                  continue;
            }
            ll kth = k, pow = 0;
            bool run = true, found = false, zeroes = true;
            while(run){
                  found = false;
                  zeroes = true;
                  fori(n){
                        // cout << "i: "<< i << endl;
                        if(a[i] != 0){
                              // cout << a[i] << " is not zero\n";
                              zeroes = false;
                        }
                        else continue;
                        if(a[i]%kth >= 1 && a[i]!=0){
                              // cout << a[i] << " is having sum of " << kth << endl;
                              if(found || a[i]%kth > 1){
                                    cout << "NO\n";
                                    goto end;
                              }
                              found = true;
                        }
                        a[i] /= kth;
                  }
                  // cout << boolalpha << zeroes << endl; 
                  if(zeroes){
                        cout << "YES\n";
                        goto end;
                  }
                  // kth *= k;  
            }
            end:
            if(1){
 
            }
      }
 
      return 0;
}