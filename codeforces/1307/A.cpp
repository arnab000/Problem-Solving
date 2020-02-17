#include <bits/stdc++.h>

using namespace std;



int main(){
    long long  n;
    cin >> n;
while(n--){

vector<long long>sura;
long long k,d;
cin>>k>>d;
    for(long long i=0;i<k;i++)
    {
        long long h;
        cin>>h;
        sura.push_back(h);
    }
    long long ans=sura[0];
     for(long long i=1;i<k;i++)
    {
        if(d==0)
            break;
       long long g=(d/i);
       if(sura[i]>g){
        ans+=g;
        d-=(g*i);
       }
       else
       {
           ans+=sura[i];
           d-=(sura[i]*i);
       }

    }
    cout<<ans<<endl;

}
}
