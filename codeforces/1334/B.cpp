#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin>>test;
    while(test--){
        long long n,x,j,i,k,sura=0;
        cin>>n>>x;
        vector<long long> var;
        for(i=0; i<n; i++){
            cin>>k;
            var.push_back(k);
        }
        sort(var.rbegin(),var.rend());
        for(i=0; i<n; i++){
            if(var[i]>=x)
                sura+=var[i]-x;
            else
            break;
        }
        if(i==n){
            cout<<n<< endl;
            continue;
        }
        else{
            for(j=i; j<n; j++){
                if(sura>=x-var[j])
                sura-=x-var[j];
                else
                    break;
            }
            cout<<j<<endl;
        }
    }

}
