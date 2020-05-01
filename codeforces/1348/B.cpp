#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long test;
    cin>>test;
    while (test--)
    {
        long long n,k;
        vector<long long>sura;
        cin>>n>>k;
       for(long long i=0;i<n;i++)
       {
           long long h;
           cin>>h;
           sura.push_back(h);

       }
       set<long long>s;
       
           for(long long j=0;j<n;j++ )
           {
              s.insert(sura[j]);
           }
       if(s.size()>k)
       {
           cout<<-1<<endl;
           continue;
       }
       if(s.size()<k)
       {
           for(long long i=1;i<=n;i++)
           {
               s.insert(i);
               if(s.size()==k)
                 break;
           }
       }
       long long y=(10000/s.size());
       vector<long long>dddd;
       for(long long i=0;i<y;i++)
       {
           for(auto j=s.begin();j!=s.end();j++)
           {
               dddd.push_back(*j);
           }
       }
       cout<<dddd.size()<<endl;
       for(long long i=0;i<dddd.size();i++)
       {
           cout<<dddd[i]<<" ";
       }
        cout<<endl;
    }
    



}