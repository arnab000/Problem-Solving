#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
while(n--)
{
    long long k;
    cin>>k;
    bool even=false,odd=false;
    for(long long i=0;i<k;i++)
    {
        long long p;
        cin>>p;
        if(p%2==0)
            even=true;
        else
            odd=true;
    }
    if(!odd)
        cout<<"No"<<endl;
    else if(!even && k%2==0)
    {
        cout<<"No"<<endl;
    }
    else if(!even && k%2!=0)
    {
        cout<<"Yes"<<endl;
    }
   else if(even==true && odd==true)
        cout<<"Yes"<<endl;


}

}
