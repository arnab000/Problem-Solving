#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    { int n;
    cin>>n;
    vector<int>sura;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        sura.push_back(k);
    }
    bool hoise=false;
    int i;
     for(i=0;i<n-1;i++)
     {
         if(abs(sura[i]-sura[i+1])>1)
         {
            hoise=true;
            break;
         }
     }
     if(hoise)
     {
         cout<<"YES"<<endl;
         cout<<i+1<<" "<<i+2<<endl;
     }
     else
        cout<<"NO"<<endl;
}
}
