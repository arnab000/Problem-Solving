#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--){
 int n;
 cin>>n;
vector<int>sura;
 priority_queue <int, vector<int>, greater<int> > sura2;

 for(int i=0;i<n;i++){
     int k;
 cin>>k;
 sura.push_back(k);
 //sura2.push_back(k);



 }
 //sort(sura.begin(),sura.end());
 int ans=0;
 sura2.push(sura[n-1]);
  for(int i=n-2;i>=0;i--){
        if(sura[i]>sura2.top()){
            ans++;
        }
        sura2.push(sura[i]);



 }
 cout<<ans<<endl;
    }
}
