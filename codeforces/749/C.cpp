#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    queue<long long>d;
    queue<long long>r;
    string s;
    cin>>s;

    for(long long i=0;i<n;i++)
    {
        if(s[i]=='D')
        {
            d.push(i);
        }
        else if(s[i]=='R')
        {
            r.push(i);
        }
    }
    while(!d.empty() && !r.empty())
    {
        long long h=d.front();
        long long u=r.front();
        if(h<u)
        {
            d.pop();
            d.push(n+h);
            r.pop();
        }
        else if(u<h)
        {
            r.pop();
            r.push(n+u);
            d.pop();
        }
    }
    if(r.empty())
        cout<<"D"<<endl;
    else if(d.empty())
        cout<<"R"<<endl;
}