#include<bits/stdc++.h>
using namespace std;
  int arr[1000005];
int main()
{
  long long n,s=0,p=0,z=0,c=0;

  cin>>n;
  set<long long>sura;
  vector<long long>ans;
if(n%2!=0)
{
     for(int i=0;i<n;i++)
  {

      long long k;
      cin>>k;
  }

     cout<<-1<<endl;
            return 0;
}


  for(int i=0;i<n;i++)
  {
      c++;
      long long k;
      cin>>k;
    if(k>0){
        arr[k]++;
        if(arr[k]!=1)
        {
            cout<<-1<<endl;
            return 0;
        }
        s++;
        long long y=sura.size();
        sura.insert(k);
        if(sura.size()==y )
        {
            cout<<-1<<endl;
            return 0;
        }


    }
    if(k<0)
    {
        k*=-1;
        if(arr[k]!=1)
        {
            cout<<-1<<endl;
            return 0;

        }

        if(arr[k]==1)
        {
            arr[k]--;
            p++;
        }
    }
    if(s==p)
    {
        ans.push_back(c);
        c=0;
        sura.clear();
    }





  }
 for(int i=0;i<1000002;i++)
 {
     if(arr[i]>0){
        cout<<-1<<endl;
            return 0;
     }
 }


  cout<<ans.size()<<endl;
  for(int i=0;i<ans.size();i++)
  {
      cout<<ans[i]<<" ";
  }
}
