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
       ll sura, mura, ma = 0,ggggg,dddddd;
  cin >> sura >> mura;

  if (mura>sura) {
    while (mura>sura) {
      if (sura==mura) 
      break;
      else if (sura<<3<= mura) 
      sura <<= 3;
      else if (sura<<2 <= mura) 
      sura <<= 2;
      else if (sura << 1 <= mura) 
      sura <<= 1;
      else {
        ma = -1;
        break;
      }

      ma++;
    }
  } else {
    while (mura < sura) {
      if (sura==mura) 
      break;
      else if 
      (sura % 8 == 0 && sura>>3>= mura) 
      sura >>= 3;
      else if (sura %4 ==0 && sura>> 2 >= mura) 
      sura >>= 2;
      else if (sura % 2 == 0 && sura >>1 >= mura) 
      sura >>= 1;
      else {
        ma = -1;
        break;
      }

      ma++;
    }
  }

  cout <<ma<< endl;
    }
    


  }



   
      
    
        

