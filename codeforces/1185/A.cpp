#include<bits/stdc++.h>
using namespace std;
int main(){
    long long d,k,x=0,y=0,i,l;
    vector<long long >sura;
    for(i=0;i<3;i++)
    {
       cin>>l;
       sura.push_back(l);

    }
    cin>>d;
    sort(sura.begin(),sura.end());
if(sura[1]-sura[0]<d)
    x=d-(sura[1]-sura[0]);
if(sura[2]-sura[1]<d)
     y=d-(sura[2]-sura[1]);
     cout<<x+y<<endl;



}
