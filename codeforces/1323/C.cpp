

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string sura;
      vector<int>mura;
    int n,cur=0,l,r,x,ans=0;
    cin>>n;
  cin>>sura;

    for(long long i=0; i<n; i++){
        if(sura[i]=='(')
            cur++;
        else
        cur--;
        if(cur==0)
        mura.push_back(i);
    }
    if(cur!=0){
        cout<<-1<< endl;
        return 0;
    }
    l=0;
    r=mura[0];
    for(long long i=0; i<mura.size(); i++){
        x=0;
        r=mura[i];
        for(long long j=l; j<=r; j++){
            if(sura[j]=='(')
                x++;
            else
            x--;
            if(x<0){
                ans +=r-l+1;
                break;
            }
        }
        l=r+1;
    }
    cout<<ans<<endl;

}

