#include<bits/stdc++.h>
using namespace std;
int arr[150005];
int main(){
    int n,i,k,ans=0;
    vector<int>sura;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>k;
        arr[k]++;
       // cout<<arr[k]<<endl;
       // sura.push_back(k);
    }
    for(i=150001;i>=1;i--)
    {
        if(arr[i]!=0 && arr[i+1]==0)
        {
             arr[i+1]++;
            arr[i]--;

        }

    }
 for(i=2;i<150002;i++)
    {
        if(arr[i]!=0 && arr[i-1]==0)
        {
            arr[i]--;
            arr[i-1]++;
        }

    }
    for(i=1;i<150002;i++)
    {
       // cout<<arr[i]<<endl;
        if(arr[i]!=0)
            ans++;

    }
    cout<<ans<<endl;



}

