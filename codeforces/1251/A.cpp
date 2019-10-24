#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
     string s;
     cin>>s;
     set<char>sura;
     for(int i=0;i<s.size();i++)
     {
         int counti=1;
         while(s[i]==s[i+1] && i<s.size()-1)
         {
             i++;
             counti++;

         }
         if(counti%2!=0)
         {
             sura.insert(s[i]);
         }

     }
    set<char>::iterator it;
     for( it=sura.begin();it!=sura.end();it++)
     {
         cout<<*it;
     }
     cout<<endl;
     //sura.clear();
    }
}
