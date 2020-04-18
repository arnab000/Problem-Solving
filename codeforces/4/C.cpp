#include<bits/stdc++.h>
using namespace std;
int main()
{

long long n;
cin>>n;
map<string,long long>ma;
while(n--)
{
string s;
cin>>s;
if(!ma[s])
{
cout<<"OK"<<endl;
ma[s]++;

}
else
{
cout<<s<<ma[s]<<endl;
ma[s]++;

}


}


}
