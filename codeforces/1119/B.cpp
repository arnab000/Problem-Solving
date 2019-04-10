#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,k,m,n;
    vector<long long>sura;

    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>m;
        sura.push_back(m);
    }
    if(n==1 || n==2)
    {
        cout<<n<<endl;
        return 0;
    }

    long long b=sura.size();
    for(i=2;i<n;i++)
    {
        long long sum=0;
        long long flag=0;
       sort(sura.begin(),sura.end()-(b-i-1),greater<long long>());
       for(j=0;j<=i;j=j+2)
       {
           sum+=sura[j];
           if(sum>k)
           {
               flag++;
               break;
           }

       }
       if(flag>0)
        break;
    }
    cout<<i<<endl;
}
