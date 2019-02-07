#include<bits/stdc++.h>
using namespace std;



int main()
{
    long long i,j,n,m,l=0,x;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>x;
        l+=x;
        
    }
    if(n%2==0)
    {
        if(x%2==0)
            cout<<"even"<<endl;
        else if(x%2!=0)
            cout<<"odd"<<endl;
    }
    else if(n%2!=0)
    {
        if(l%2==0)
            cout<<"even"<<endl;
        else if(l%2!=0)
            cout<<"odd"<<endl;
        
    }
    
    
    
}
