#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=0,l=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a')
        {
            n++;
        }
        if(s[i]!='a')
        {
            l++;
        }

    }
    if(l>=n)
    cout<<2*n-1<<endl;
    else
        cout<<s.size()<<endl;
}
