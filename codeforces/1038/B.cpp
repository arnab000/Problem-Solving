#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,i,j=0,l=0,k=100000;
    cin>>x;
    if(x==1||x==2)
        cout<<"No";

    else{
        cout<<"Yes";
        cout<<endl;
        cout<<"1"<<" ";
        cout<<x;
        cout<<endl;
        cout<<x-1<<" ";
        for(i=1;i<x;i++)
        {
            cout<<i<<" ";
        }
    }



}
