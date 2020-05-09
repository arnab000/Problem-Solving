#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
 long long test;
 cin>>test;
 while(test--)
 {
  long long n,k;
  cin>>n>>k;
  if(k>n)
  {
     cout<<"NO"<<endl;
     continue;
  }
  if(n==k)
  {
     cout<<"YES"<<endl;
     for(long long i=1;i<=n;i++)
     {
        cout<<1<<" ";
     }
     cout<<endl;
     continue;
  }
  if(k==1)
  {
     cout<<"YES"<<endl;
     cout<<n<<endl;
     continue;
  }
  if(n%2!=0 && k%2==0){
     cout<<"NO"<<endl;
  }
  else if(n%2!=0 && k%2!=0)
  {
     cout<<"YES"<<endl;
     for(long long i=1;i<=k-1;i++)
     {
        cout<<1<<" ";
        
     }
     cout<<n-(k-1)<<endl;
  }
  if(n%2==0)
  {
     if(k>n/2 && k%2!=0)
     {
        cout<<"NO"<<endl;
     }
     else
     {
        if(k%2==0){
           cout<<"YES"<<endl;
        for(long long i=1;i<=k-1;i++)
        cout<<1<<" ";
        cout<<n-(k-1)<<endl;
        }
        else{
           cout<<"YES"<<endl;
            for(long long i=1;i<=k-1;i++)
        cout<<2<<" ";
            
            cout<<n-(2*(k-1))<<endl;
        }

     }

     
  }

 
  
 
 }
}