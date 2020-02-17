#include <bits/stdc++.h>

using namespace std;



int main(){
 string s;
 cin>>s;
 long long arr[27]={0};
 map<string,long long>ma;
 long long mx=-1;
 for(long long i=0;i<s.size();i++)
 {
     arr[s[i]-'a']++;

 }
 for(long long i=0;i<27;i++)
 {
     mx=max(mx,arr[i]);
 }
 for(long long i=0;i<s.size();i++){
        arr[s[i]-'a']--;
 for(long long j=0;j<26;j++)
 {
     string baal="";
     baal.push_back(s[i]);
     baal.push_back('a'+j);
     ma[baal]+=arr[j];

 }

 }
 for(auto chat=ma.begin();chat!=ma.end();chat++)
 {
     mx=max(mx,chat->second);
 }
 cout<<mx<<endl;
}
