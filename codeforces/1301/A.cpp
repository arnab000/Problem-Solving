#include <bits/stdc++.h>

using namespace std;



int main(){
    int n;
    cin >> n;
while(n--){
string a,b,c;
cin>>a;
cin>>b;
cin>>c;
bool hbe=true;
for(long long i=0;i<a.size();i++){
    if(c[i]!=a[i] && c[i]!=b[i])
       {
           hbe=false;
           break;

       }

}
if(hbe)
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;
}



}
