#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        long long n;
        cin>>n;
        long long ans=1;
        vector<long long>sura;
        vector<long long>s;
        s.push_back(0);


        for(long long j=1;j<=sqrt(n);j++)
        {
          if(j==n/j)
            s.push_back(j);
          else
          {
              s.push_back(j);
              s.push_back(n/j);

          }
        }
        cout<<s.size()<<endl;
        sort(s.begin(),s.end());
        for(long long i=0;i<s.size();i++)
        {
            cout<<s[i]<<" ";
        }
        cout<<endl;


    }
}
