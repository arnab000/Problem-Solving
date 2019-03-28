#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k=-1,d,h;
    vector<long long>sura;

    cin>>n>>h;
    for(long long i=0;i<n;i++)
    {
        cin>>d;
        sura.push_back(d);
    }
    if(n==1)
    {
        cout<<n<<endl;
        return 0;
    }
    for(long long i=0;i<n-1;i++)
    {
        long long l=1;
        while(sura[i]!=sura[i+1] && i<n-1)
        {

            l++;
            i++;


        }
        k= max(k,l);
    }
    cout<<k<<endl;
}
