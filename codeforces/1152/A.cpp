#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,i,j,l;
    int oddcount=0;
    int evencount=0,odd=0,even=0,chest=0;
    cin>>n>>m;

    for(i=0;i<n;i++)
    {
        cin>>k;
        if(k%2==0)
        oddcount++;
        else
            evencount++;


    }
     for(i=0;i<m;i++)
    {
        cin>>k;
        if(k%2==0)
        odd++;
        else
            even++;


    }
    cout<<min( oddcount,even)+min(evencount,odd)<<endl;
}
