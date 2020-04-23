#include <bits/stdc++.h>
using namespace std;





int main() {
    long long test;
    cin>>test;



    while(test--) {
  long long n,k;
  cin>>n;
  vector<long long>sura;
  for(long long i=0;i<n;i++)
  {
  long long k;
  cin>>k;
  sura.push_back(k);

  }
bool  hbe=true;

  for(long long i=0;i<n-1;i++)
  {
 if(sura[i]+1<sura[i+1])
 hbe=false;

  }
  if(hbe)
  cout<<"Yes"<<endl;
  else
  cout<<"No"<<endl;






    }

}
