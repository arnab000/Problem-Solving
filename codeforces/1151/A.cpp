#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=100000,p=0,n;
    string sura,s="ACTG",str;
    cin>>n;
    cin>>sura;

    for(int i=0;i<n-3;i++)
    {
        p=0;
        str=sura.substr(i,4);
        //cout<<str<<endl;

        for(int j=0;j<4;j++)
        {
            int y=0;
            if(s[j]!=str[j])
            {
                int y=s[j]-str[j];
                y=abs(y);


                p+=min(y,26-y);

            }


        }
         a=min(a,p);
    }
    cout<<a<<endl;

}
