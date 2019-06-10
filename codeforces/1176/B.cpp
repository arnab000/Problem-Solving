#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,i,t;
    cin>>t;
    while(t--){
    cin>>n;
    int sura[3]={0};

    for(i=0;i<n;i++)
    {
       cin>>a;
       sura[a%3]++;
    }
    cout<<sura[0]+min(sura[1],sura[2])+ (sura[1]-min(sura[1],sura[2]))/3+(sura[2]-min(sura[1],sura[2]))/3<<endl;
    }
}
