#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin>>test;
    while(test--){
        long long n;
        cin>>n;
        long long ans=1;
        vector<long long >sura;
        sura.push_back(ans);
        long long dick=ans;
        while (dick<n)
        {
            ans*=2;
            dick+=ans;
            if(dick<=n)
            sura.push_back(ans);
        }
        if(dick>n)
        {
            dick-=ans;
            
        }
        if(dick<n)
        {
            sura.push_back(n-dick);
            sort(sura.begin(),sura.end());
        }
        cout<<sura.size()-1<<endl;
        for(long long i=1;i<sura.size();i++){
            cout<<sura[i]-sura[i-1]<<" ";
        }
        cout<<endl;
        
        
        
    }


}