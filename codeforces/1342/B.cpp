#include <bits/stdc++.h>
using namespace std;





int main() {
    long long test;
    cin>>test;



    while(test--) {


string s;
cin>>s;
bool one=false,zero=false;
for(long long i=0;i<s.size();i++){
if(s[i]=='1')
one=true;
else
zero=true;
}
if(one && zero)
{
for(long long i=0;i<s.size();i++){
cout<<"01";
}
cout<<endl;
}
else
{
cout<<s<<endl;
}


}


    }


