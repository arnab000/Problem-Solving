#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,a,l=0;
    vector <int> v;
    cin >> n;
    for(i=0; i<n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end(),greater<int>());
    for(i=0; i<=n-3; i++)
    {
        if(v[i]<v[i+1]+v[i+2])
            l++;
    }
    if(l>0)
        cout << "YES";
    else
        cout << "NO";

    
}