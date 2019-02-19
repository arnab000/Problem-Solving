#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,l=0;
    cin>>n;
    long long a[n],max=0;
    vector<int>v;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>max)
            max=a[i];
    }
    for(i=0;i<n;)
    {
        l=0;
        if(a[i]==max)
        {
            while(a[i]==max && i<n)
            {
                l++;
                i++;
            }
            v.push_back(l);
        }
        else
            i++;
    }
    int s=v.size();
    sort(v.begin(),v.end());
    cout<<v[s-1]<<endl;
}