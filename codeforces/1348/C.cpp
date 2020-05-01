#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    long long test;
    cin>>test;
    while(test--){
        long long  n,k;
        cin>>n>>k;
        string sura;
        cin>>sura;
        sort(sura.begin(),sura.end());
        vector<string> ma(k);
        for(int i=0; i<k; i++) 
           ma[i].push_back(sura[i]);

        if(ma[0][0]!=ma[k-1][0]){
            cout << ma[k-1] << endl;
            continue;
        }
        bool hbe = true;
        for(int i=k; i<n-1 && hbe ; i++){
            if(sura[i]!=sura[i+1]) 
            hbe = false;
            

        }
        if(!hbe){
            for(int i=k; i<n; i++)
             ma[k-1].push_back(sura[i]);
            cout << ma[k-1] << endl;
            continue;
        }
        int tmp = (n-k)/k;
        if(int (n-k)%k!=0) 
        tmp++;
        for(int i=0; i<tmp; i++) 
        ma[k-1].push_back(sura[k]);
        cout << ma[k-1] << endl;
    }
    
}