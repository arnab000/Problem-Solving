#include<bits/stdc++.h>
    
using namespace std;
#define ll long long
#define f first
#define s second
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);
     
int main()
{
      Fast;
      ll test;
      cin>>test;
      while(test--)
      {
          ll n,k;
          cin>>n>>k;
          if(n%2==0)
          {
              n+=(k*2);
          }
          else
          {
              ll small=0;
              for(long long i=2;i<=sqrt(n);i++)
              {
                  if(n%i==0){
                  small=i;
                  break;
                  }

              }
              if(small==0)
              small=n;
              n+=small;
              k--;
              n+=(k*2);


          }
          cout<<n<<endl;
     
      
      
       

      }
      
    
        

}