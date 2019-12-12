#include<bits/stdc++.h>
using namespace std;
 map<char,bool>ma;
int main()
{


    int test;
    cin>>test;
    while(test--)
    {
        string s;
        cin>>s;
        long long l=0,r=0,u=0,d=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='L')
            {
                l++;

            }
             if(s[i]=='R')
            {
                r++;

            }
             if(s[i]=='U')
            {
                u++;

            }
             if(s[i]=='D')
            {
                d++;

            }
        }
        if(l==0 &&(u==0 || d==0))
        {

           cout<<0<<endl;
           cout<<" "<<endl;
           continue;

        }
        if(r==0 &&(u==0 || d==0))
        {

           cout<<0<<endl;
           cout<<" "<<endl;
           continue;

        }
        if(u==0 &&(r==0 || l==0))
        {

           cout<<0<<endl;
           cout<<" "<<endl;
           continue;

        }
        if(d==0 &&(l==0 || r==0))
        {

           cout<<0<<endl;
           cout<<" "<<endl;
           continue;

        }
        if(l==0 )
        {
            cout<<2<<endl;
            cout<<"UD"<<endl;
            continue;
        }
        if(r==0 )
        {
            cout<<2<<endl;
            cout<<"UD"<<endl;
            continue;
        }
        if(u==0 )
        {
            cout<<2<<endl;
            cout<<"LR"<<endl;
             continue;
        }
        if(d==0 )
        {
            cout<<2<<endl;
            cout<<"LR"<<endl;
             continue;
        }

        if(l>0 && r>0 && u>0 && d>0)
        {
            long long p= min(l,r);
            long long q=min(u,d);
            cout<<2*p+2*q<<endl;
            for(int i=0;i<p;i++)
            {
                cout<<"L";
            }
             for(int i=0;i<q;i++)
            {
                cout<<"U";
            }
             for(int i=0;i<p;i++)
            {
                cout<<"R";
            }
             for(int i=0;i<q;i++)
            {
                cout<<"D";
            }
            cout<<endl;

        }
    }
}
