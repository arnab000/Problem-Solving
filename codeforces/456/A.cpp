#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j=0,k,l;
    cin>>n;
    int arr[100005]={0};
    vector<int>sura;
    vector<int>sura1;
    for(i=0;i<n;i++)
    {
        cin>>k>>l;
        sura.push_back(k);
        arr[k]=i;
        sura1.push_back(l);
    }
    sort(sura.begin(),sura.end());
    for(i=0;i<n-1;i++)
    {
if(sura1[arr[sura[i]]]>sura1[arr[sura[i+1]]])
{
    cout<<"Happy Alex"<<endl;
    j++;
    break;

}
    }
    if(j==0)
        cout<< "Poor Alex"<<endl;

}
