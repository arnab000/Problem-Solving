#include<bits/stdc++.h>
using namespace std;
int main(){
    long i,j,k,l,sum=0,n,m;
    vector<long >sura;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>l;
        sura.push_back(l);
    }
    for(i=0;i<n;i++)
    {

        sum+=sura[i];
        if(sum<=m)
        {
            cout<<0<<" ";
        }
        else{
            k=0;
            sort(sura.begin(),sura.begin()+i);
            int y=sum;
            j=i;
            while(y>m)
            {
                k++;
                y-=sura[j-1];
                j--;
            }
            cout<<k<<" ";
        }
    }
    cout<<endl;
}
