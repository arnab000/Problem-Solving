#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,i,j,k,l;
    vector<int>sura;
    cin>>a>>b;
    int arr[a+1]={0};
    int ar[a+1]={0};
    for(i=0;i<b;i++)
    {
        cin>>k;
        sura.push_back(k);
        arr[k]++;
    }
    sort(arr,arr+(a+1));
    vector<int>s[arr[a]+1];
    for(i=0;i<b;i++)
    {
        ar[sura[i]]++;
        s[ar[sura[i]]].push_back(sura[i]);
        if( s[ar[sura[i]]].size()==a)
            cout<<1;
        else
            cout<<0;


    }

}
