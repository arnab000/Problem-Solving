#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        string s1,s2;
        cin>>n;
        cin>>s1;
        cin>>s2;
        int c=0;
        set<char>s0;
          set<char>s;

        for(int i=0;i<n;i++)
        {
            if(s1[i]!=s2[i])
            {
                c++;
                s0.insert(s1[i]);
                s.insert(s2[i]);
            }


        }
        if(s0.size()==1 &&s.size()==1 && c==2)
        {
            cout<<"Yes"<<endl;
        }
        else
             cout<<"No"<<endl;

    }
}
