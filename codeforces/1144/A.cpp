#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,i,j,k,l,n;
    cin>>n;
    getchar();

    for(i=0;i<n;i++)
    {
        string s;
        l=0;
        cin>>s;
        sort(s.begin(),s.end());
        //cout<<s<<endl;
        if(s.size()==1)
            cout<<"Yes"<<endl;
        else{
        for(j=0;j<s.size()-1;j++)
        {
            int k=s[j]-s[j+1];
          //  cout<<k<<endl;
            if(k!=-1)
            {
                cout<<"No"<<endl;
                l++;
                break;

            }
        }
        if(l==0)
            cout<<"Yes"<<endl;
        }

    }
}
