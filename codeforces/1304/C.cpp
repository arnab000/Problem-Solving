#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin>>test;
    while(test--){
        long long n,k;
        cin>>n>>k;
    bool hbe =true;;
    long long prev1=k,prev2=k;
    long long time=0;
    for(long long i=0;i<n;i++)
    {
        long long x,y,z;

        cin>>x>>y>>z;
        long long dif=x-time;
       prev1=prev1-dif;
       prev2=prev2+dif;
       if(y>prev2 || z<prev1)
       {
           hbe=false;

       }



        time=x;
        prev1=max(prev1,y);
        prev2=min(prev2,z);


    }
    if(hbe)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;




    }



}
