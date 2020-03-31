#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin>>test;
    while(test--)
    {
        long long n,k;
        string sura;
        cin>>n>>k;
        cin>>sura;
        vector<char>v[k+1];
        long long u=n/k;
        long long ans=0;
        for(long long i=0;i<k;i++)
        {

            for(long long j=0;j<u;j++)
            {

                  v[i].push_back(sura[i+((j*k))]);





            }


        }

           for(long long i=0;i<k/2;i++)
        {
         map<char,long long>ma;
         long long mx=-1;
         long long y=0;
            for(long long j=0;j<u;j++)
            {


         ma[v[i][j]]++;
         ma[v[k-i-1][j]]++;


         mx=max(mx,ma[v[k-i-1][j]]);
         mx=max(mx,ma[v[i][j]]);


            }

y=u*2;

ans+=(y-mx);
        }
        if(k%2!=0){

            map<char,long long>ma;
         long long mx=-1;
         long long y=0;
             for(long long j=0;j<u;j++)
            {


                    ma[v[k/2][j]]++;



mx=max(mx, ma[v[k/2][j]]);






            }
            y=u;
            ans+=(y-mx);

        }

cout<<ans<<endl;



    }
}
