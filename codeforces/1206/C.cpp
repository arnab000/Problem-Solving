#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    if(n%2==0 )
        cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        int j=0;
        for(int i=1;i<=2*n;i+=2)
        {
            j++;
            if(j%2==0)
            cout<<i+1<<" ";
            else
                cout<<i<<" ";
        }
        int k=0;
        for(int i=2;i<=2*n;i+=2)
        {
            k++;
            if(k%2==0)
                cout<<i-1<<" ";
            else
                cout<<i<<" ";
        }


    }
}
