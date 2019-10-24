#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
       string s;
       int t;
       cin>>t;
       vector<int>sura;
       int z=0,o=0,haha=0;;
       for(int i=0;i<t;i++)
       {
           cin>>s;
           for(int j=0;j<s.size();j++)
           {
               if(s[j]=='1')
                o++;
                else
                    z++;
           }

           if(s.size()%2!=0)
            haha++;

       }
       int ans=0;


    if(o%2!=0 && z%2!=0)
    {
        if(haha<2)
        cout<<t-1<<endl;
        else
            cout<<t<<endl;

    }
    else
        cout<<t<<endl;

}
}
