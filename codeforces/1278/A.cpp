#include<bits/stdc++.h>
using namespace std;
int main()
{
   int test;
   cin>>test;
   while(test--)
   {
       string s,s1;
       cin>>s;
       cin>>s1;
       bool hbe;
       if(s1.size()<s.size())
       {
           cout<<"NO"<<endl;
           continue;
       }
       for(int i=0;i<=s1.size()-s.size();i++)
       {
           map<char,int>ma;
           map<char,int>m;
            hbe =true;
           for(int j=i;j<i+s.size();j++)
           {
               ma[s1[j]]++;
           }
           for(int j=0;j<s.size();j++)
           {
               m[s[j]]++;
           }
           for(int j=0;j<s.size();j++)
           {
             if(m[s[j]]!=ma[s[j]])
             {
                 hbe =false;
             }
           }
           if(hbe)
            break;

       }
       if(hbe)
            cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;

   }

}
