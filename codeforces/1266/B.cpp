#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  test;
    cin>>test;
    while(test--)
    {
      unsigned long long n;
       cin>>n;

      unsigned long long h=n%14;
     //cout<<k<<" "<<h<<endl;
       if(n>14 && h>0 && h<7)
        cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
