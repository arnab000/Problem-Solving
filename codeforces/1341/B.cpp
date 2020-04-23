#include <bits/stdc++.h>
using namespace std;





int main() {
    long long test;
    cin>>test;



    while(test--) {
  long long n,k;
  cin>>n>>k;
  vector<long long>sura;

  for(long long i=0;i<n;i++)
  {
  long long d;
  cin>>d;
  sura.push_back(d);


  }
  long long ans=0,l=0,kutta=0;
  long long r=l+k-1;
  for(long long i=1;i<l+k-1;i++)
  {
  if(sura[i]>sura[i-1] && sura[i]>sura[i+1])
  ans++;


  }
  long long h=ans;
  kutta=l;
  //cout<<ans<<" "<<r<<endl;
  while(r<n-1)
  {
  r++;
  if(sura[r-1]>sura[r-2] && sura[r-1]>sura[r])
  {
  h++;
  }
  l++;
  if(sura[l]>sura[l-1] && sura[l]>sura[l+1])
  {
  h--;
  }
  if(h>ans)
  {
  ans=h;
  kutta=l;


  }


  }

  cout<<ans+1<<" "<<kutta+1<<endl;
 






    }

}
