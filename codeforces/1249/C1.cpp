#include<bits/stdc++.h>
using namespace std;

int main()
{
    long q,i,n,l,j,c=0,x;
    vector<long long>sura;

sura.push_back(1);
    for(i=1;i<10;i++){
            long  baal,saal;
        baal=pow(3,i);
        saal=sura.size();
        for(j=0;j<saal;j++){
           sura.push_back(baal+sura[j]);
        }
        sura.push_back(baal);
    }
    sort(sura.begin(),sura.end());
    long test;

    cin>>test;
    while(test--){

            cin>>l;
             vector<long long> :: iterator it;

            if(binary_search(sura.begin(),sura.end(),l))
                 it=lower_bound(sura.begin(),sura.end(),l);
            else
                it=upper_bound(sura.begin(),sura.end(),l);

            cout<<sura[it-sura.begin()]<<endl;

        }


    }
