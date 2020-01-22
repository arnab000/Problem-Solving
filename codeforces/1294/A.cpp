#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin>>test;
    while(test--)
    {
        long long a,b,c,n;
        cin>>a>>b>>c>>n;
        long long boro=max(a,max(b,c));
        long long baal=(boro-a)+(boro-b)+(boro-c);
        long long k=n-baal;
        if(k%3==0 && k>=0)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
