#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long test;

        long long n;
        cin>>n;
        vector<long long >sura;
         vector<long long >mura;
         long long h=0,p=0;
        for(long long i=0;i<n;i++)
        {
            long long k;
            cin>>k;
            sura.push_back(k);
            if(k==1)
                h++;
        }
        for(long long i=0;i<n;i++)
        {
            long long k;
            cin>>k;
            mura.push_back(k);
            if(k==1)
                p++;
        }
        long long haha=0;
        //cout<<p<<" "<<h<<endl;
         for(long long i=0;i<n;i++)
        {
            if(sura[i]==1 && mura[i]==0)
                haha++;
        }
        //cout<<haha<<endl;
        if(haha==0 && h<=p)
        {
            cout<<-1<<endl;
           return 0;
        }
       else  if(h>p)
        {
            cout<<1<<endl;
          return 0;

        }
       else if(p>h)
        {
            p++;
            //cout<<p-h<< " "<<haha<<endl;
            cout<<ceil(((p-h)*1.00)/haha)+1<<endl;
            return 0;
        }
       else if(p==h && haha!=0)
        {
            cout<<2<<endl;
            return 0;
        }




}
