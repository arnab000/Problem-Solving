#include<bits/stdc++.h>
using namespace std;
int arr[150005];
int main(){
   int n;
   cin>>n;
   while(n--){
      int arr[10005]={0};
        int k,h=0;
    cin>>k;
    int y;
    vector<int>sura;
    set<long long>s;
    for(int i=0;i<k*4;i++)
    {
        cin>>y;
        sura.push_back(y);
   arr[y]++;
    }
     for(int i=0;i<k*4;i++)
    {

  if( arr[sura[i]]%2!=0)
    h++;
    }
  if(h>0)
  {
      cout<<"NO"<<endl;
      continue;
  }
    sort(sura.begin(),sura.end());
    for(int i=0;i<k*4/2;i+=2){
       // cout<<sura[i]*sura[k*4-i-1]<<endl;
            s.insert(sura[i]*sura[k*4-i-1]);

    }
    if(s.size()==1)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;



   }

}

