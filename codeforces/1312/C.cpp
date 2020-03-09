#include<bits\stdc++.h>
#define int long long
using namespace std;
main()
{
    int a,b,ok,i,j,s,tc;
    cin>>tc;
    while(tc--){
            ok=1;
    cin>>a>>b;
    int aa[a];
    for(i=0;i<a;i++)
        cin>>aa[i];
        map<int,int>mp;
    for(i=0;i<a;i++)
    {
        if(aa[i]==0)
            continue;
        else
        {
            s=1,j=0;
            while(aa[i]>0){
            while(s<=aa[i])
            {
                j++;
                s*=b;
            }
            s/=b;
            if(j>0)
            j--;
          //  cout<<j<<endl;
            if(mp[j]==1)
            {
                 //cout<<j<<endl;
                ok=0;
                break;
            }
            mp[j]=1;
            aa[i]-=s;
            j=0;
            s=1;
            }
 
        }
    }
    if(ok)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }
}