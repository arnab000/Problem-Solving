#include<bits/stdc++.h>
using namespace std;
int main(){
    long long T,n,s,t;
    cin>>T;
    while(T--){
        cin>>n>>s>>t;
        long long y=min(s,t);
        cout<<n-y+1<<endl;
    }
}
