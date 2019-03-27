#include<bits/stdc++.h>
using namespace std;

int main()
{

string s,sura;
int i,j,k;
cin>>k;
getchar();

for(i=0;i<k;i++)
{

    string s,sura;
    getline(cin,s);
    sort(s.begin(),s.end());
    int l=1;
    for(int j=0;j<s.size();j++)
    {
        while(s[j]==s[j+1])
        {
           l++;
           j++;
        }
        break;
    }
    if(l==s.size())
        cout<<"-1"<<endl;
    else
        cout<<s<<endl;

}


}


