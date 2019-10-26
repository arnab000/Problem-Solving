#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
if(n==9 && m==1)
{
    cout<<99<<" "<<100<<endl;
    return 0;
}
    if(n-m==(-1))
    {
        cout<<n<<" "<<m<<endl;
    }
    else if (n==m)
    {
        cout<<n*10<<" "<<m*10+1<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
}
