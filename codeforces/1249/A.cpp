#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        vector<int>sura;
        bool h=false;
        for(int i=0;i<n;i++)
        {
            int k;
            cin>>k;
            sura.push_back(k);
        }
        sort(sura.begin(),sura.end());
         for(int i=1;i<n;i++)
        {
          if(sura[i-1]+1==sura[i])
          {
            h=true;
            break;
          }
        }
        if(h)
            cout<<2<<endl;
            else
            cout<<1<<endl;

    }
}
