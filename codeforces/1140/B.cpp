#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,l,m,k,kk;
    cin>>t;
    getchar();
    while(t--)
    {
        cin>>n;
        getchar();
        string s;
        getline(cin,s);
        l=s.size();
        if(s[0]=='>' || s[l-1]=='<')
        {
            cout<<0<<endl;
        }
        else
        {
            k=0,kk=0;
            for(i=0;i<l;i++)
            {
                if(s[i]!='>')
                    k++;
                else
                    break;
            }
            for(i=l-1;i>=0;i--)
            {
                if(s[i]!='<')
                    kk++;
                else
                    break;
            }
            if(k<kk)
                cout<<k<<endl;
            else
                cout<<kk<<endl;
        }
    }
}
