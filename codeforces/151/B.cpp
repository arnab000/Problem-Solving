#include<bits/stdc++.h>
using namespace std;



int main()
{
    vector<string> v;
    vector<string>v1;
    vector<string>v2;
    int x=0,y=0,z=0,i,j,k=0,l=0,m,n,o=0;
    char s[100],a[100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>m;
        gets(a);


l=0;k=0;o=0;
            for(j=0;j<m;j++)
            {
                gets(s);
                if(s[0]==s[1]&&s[1]==s[3]&&s[3]==s[4]&&s[4]==s[6]&&s[6]==s[7])
                    l++;
                else if(s[0]>s[1]&&s[1]>s[3]&&s[3]>s[4]&&s[4]>s[6]&&s[6]>s[7])
                    k++;
                else
                    o++;

            }


            if(x<l)
                {
                    x=l;
                    v.clear();
                    v.push_back(a);
                }
            else if(x==l)
            {
                v.push_back(a);

            }


            if(y<k)
                {
                    y=k;
                    v1.clear();
                    v1.push_back(a);
                }
            else if(y==k)
            {
                v1.push_back(a);

            }


            if(z<o)
                {
                    z=o;
                    v2.clear();
                    v2.push_back(a);
                }
            else if(z==o)
            {
                v2.push_back(a);

            }

    }

    cout<<"If you want to call a taxi, you should call:";
    for(i=0;i<v.size();i++){
        cout<<v[i];
        if(i<v.size()-1)
        cout<<",";
    }
        cout<<".";
        cout<<endl;

    cout<<"If you want to order a pizza, you should call:";
    for(i=0;i<v1.size();i++){
        cout<<v1[i];
        if(i<v1.size()-1)
        cout<<",";
    }
        cout<<".";
        cout<<endl;

      cout<<"If you want to go to a cafe with a wonderful girl, you should call:";
    for(i=0;i<v2.size();i++){
        cout<<v2[i];
        if(i<v2.size()-1)
        cout<<",";
    }
        cout<<".";
        cout<<endl;


}