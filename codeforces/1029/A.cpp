#include <bits/stdc++.h>
using namespace std;

int main(){

int n, k;
string s, sura;
    cin>>n>>k>>s;
    int pos = 0;
    for(int i=1; i<n; i++)
        if(s.substr(0,i) == s.substr(n-i,n))
           {
              pos=i;
              //cout<< s.substr(0,i)<<endl;
              //cout<<s.substr(n-i,n)<<endl;
           }

    sura = s;
    for(int i=1; i<k; i++)
        s+=sura.substr(pos,n);
    cout<<s<<endl;
}
