#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,k,i;
    cin>>n>>k;
    set<int>sura;
    int a[k];
    int c[n+2]={0},f[n+2]={0},s[n+2]={0};
    for(i=1;i<=k;i++){
        cin>>a[i];
        sura.insert(a[i]);
        if(c[a[i]-1]!=0)
            f[a[i]]=1;
        if(c[a[i]+1]!=0)
            s[a[i]]=1;
        c[a[i]]=1;
    }
int sum=n*3-2;
    for(i=1;i<=k;i++){
        if(f[a[i]]!=0)
           {
             sum--;
             f[a[i]]=0;
           }
        if(s[a[i]]!=0)
            {sum--;
            s[a[i]]=0;

            }

            //sum--;

    }
    cout<<sum-sura.size()<<endl;

}