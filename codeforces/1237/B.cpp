#include<bits/stdc++.h>
using namespace std;
bool arr[100005];
int main()
{
    int n,i,ans=0;

    cin >> n;
  queue <long long>sura;

  for(int i=0;i<n;i++)
  {
      int k;
      cin>>k;
      sura.push(k);
  }
   for(int i=0;i<n;i++)
  {
      int k;
      cin>>k;
    if(k!=sura.front() && arr[sura.front()]==false){
        arr[k]=true;
        ans++;
        //cout<<ans<<endl;
    }
    else if(k!=sura.front() && arr[sura.front()]==true)
    {
        //cout<<sura.front()<<endl;
        while(arr[sura.front()]==true)
        {
            sura.pop();
        }
        if(sura.front()!=k)
        {
            ans++;
            arr[k]=true;
           // cout<<ans<<endl;
        }
        else if(sura.front()==k)
        {
            sura.pop();
        }
    }
    else if(k==sura.front())
    {
         sura.pop();
    }


  }
  cout<<ans<<endl;

}
