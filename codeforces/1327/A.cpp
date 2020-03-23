#include<bits/stdc++.h>
    using namespace std;


    int main()
    {
      
        long long t;
        cin>>t;
        while(t--){
            long long  n,k;
            cin>>n>>k;
            if(n==1 && k == 1){
                cout<<"YES"<<endl;
                continue;
            }
            if((n+k)%2 || n<=k){
                cout<<"NO"<<endl;
                continue;
            }
            if(n>=k*k){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }

        }
    }
