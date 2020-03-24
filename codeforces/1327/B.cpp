#include<bits/stdc++.h>
using namespace std;
int main()
 
{
    long long test;
    cin>>test;
    while(test--)
    {
       long long n,k;
       cin>>n;
       map<long long ,bool>ma;
       map<long long ,bool>ta;
       long long prince=0,princes=0,j;
       map<long long,bool>v;
       bool baal=false;
       for(long long i=0;i<n;i++)
       {
           cin>>k;
           bool done=false;
           vector<long long>l;
 
           while(k--)
           {
              long long p;
              cin>>p;
              l.push_back(p);
              if(!ma[p] && !done)
              {
                  ma[p]=true;
                  done=true;
                  prince++;
 
 
 
              }
 
           }
           if(done)
            princes++;
            else if(!done && !baal){
            j=i+1;
            for(long long i=0;i<l.size();i++)
            {
                v[l[i]]=true;
            }
            baal=true;
            }
 
 
 
       }
       if(n>prince)
       {
           cout<<"IMPROVE"<<endl;
          cout<<j<<" ";
           for(long long i=0;i<n;i++)
           {
               if(!ma[i+1] &&!v[i+1])
               {
                  cout<<i+1<<endl;
                  break;
               }
           }
       }
       else
        cout<<"OPTIMAL"<<endl;
 
 
    }
}