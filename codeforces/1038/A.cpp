#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,i,j=0,l=0,k=100000;
    string s;
    char a,b;

    cin>>x>>y;
    getchar();
    getline(cin,s);


    for(a='A';j<y;a++)
    { l=0;

        for(i=0;i<x;i++)
        {
            if(a==s[i])
            {
                l++;
            }

        }

        if(l<k)
        k=l;
        j++;


    }
    cout<<k*y;


}

