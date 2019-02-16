#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=2,j,n,k,sura;
    cin>>n>>k;
    sura=k;
    int cost=k;
    int l=(n-1)-k;
    if(l==0)
        cout<<k<<endl;
    else if(l>0)
    {
        while(1)
        {
            sura++;
            cost+=i;
            i++;
            if(sura==(n-1))
                break;


        }
        cout<<cost<<endl;

    }
    else if(l<0)
    {
        cout<<(n-1)<<endl;
    }

}
