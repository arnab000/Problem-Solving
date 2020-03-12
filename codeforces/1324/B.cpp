#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+10];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
 
        }
        int c=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(a[i]==a[j]&&abs(j-i)>1)
                {
                    c=1;
                    break;
                }
            }
            if(c==1)
            {
                break;
            }
        }
        if(c==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}