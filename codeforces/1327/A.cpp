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
      
       if(n>=k*k && (n-k)%2==0)
       {
           cout<<"YES"<<endl;
       }
       else
        cout<<"NO"<<endl;
 
 
 
    }
}