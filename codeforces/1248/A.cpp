#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long test;
  cin>>test;
  while(test--){
    long long n,e1=0,e2=0,o1=0,o2=0,m;
    cin>>n;
    for(long long i=0;i<n;i++)
    {
        long long k;
        cin>>k;
        if(k%2==0)
            e1++;
        else
            o1++;
    }
    cin>>m;
       for(long long i=0;i<m;i++)
    {
        long long k;
        cin>>k;
        if(k%2==0)
            e2++;
        else
            o2++;
    }
    cout<<e1*e2+o1*o2<<endl;
  }

}
