#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,j=0,n;
    cin>>n;

    getchar();
    getline(cin,s);
    if(n==1)
        cout<<"Yes"<<endl;
    else{
    sort(s.begin(),s.end());
    for(i=0;i<s.size();i++)
    {
        if(s[i]==s[i+1])
        j++;

    }
    if(j==0)
        cout<<"No"<<endl;
    else
        cout<<"Yes"<<endl;}
}
