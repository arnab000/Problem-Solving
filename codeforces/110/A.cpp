
#include<bits/stdc++.h>

using namespace std;
int main()
{
    string s;

    getline(cin,s);
    int k=0,i,j,l=0,x,a;
    vector<int>v;

    for(i=0;i<s.length();i++)
    {
        if(s[i]=='4' || s[i]=='7')
            k++;
    }

while(k>0)
{
    x=k%10;
    v.push_back(x);
    k=k/10;
}
for(i=0;i<v.size();i++)
{
    if(v[i]==4 || v[i]==7)
    l++;

}
if(l==v.size()&& v.size()>0)
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;

}
