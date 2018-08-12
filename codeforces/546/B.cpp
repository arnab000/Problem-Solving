
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,x,l=0,sum=0;
    vector<int>v;
    vector<int>a;
    vector<int>b;
    vector<int>c;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);


    }
   sort(v.begin(),v.end());

    for(i=0;i<n;i++)
    {

        for(j=i+1;j<n;j++)
        {
if(v[i]==v[j])
{
    v[j]=v[j]+1;
    l++;
}

        }



    }
    cout<<l<<endl;

}
