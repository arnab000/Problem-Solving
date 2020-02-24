#include <bits/stdc++.h>

using namespace std;



int main()
{
int test;
cin>>test;
while(test--)
{
 long long n,m;
 cin>>n>>m;
 vector<long long>sura;
 vector<long long> haha;
 vector<long long>alpha[27];
 string s;
 cin>>s;
 long long ans[27]={0};

 for(long long i=0;i<s.size();i++)
 {
     alpha[s[i]-'a'].push_back(i+1);
     ans[s[i]-'a']++;
 }
 for(long long i=0;i<m;i++)
 {
     long long k;
     cin>>k;

for(char h='a';h<='z';h++)
{
    if(!alpha[h-'a'].empty()){

        auto low1 = lower_bound(alpha[h-'a'].begin(),alpha[h-'a'].end(), k);

            long long u=(low1-alpha[h-'a'].begin());
            //cout<<u+1<<" "<<alpha[h-'a'][u-1]<<endl;


         if(low1!=alpha[h-'a'].end() )
         {
             if(alpha[h-'a'][u]<=k)
                u++;
         }
         ans[h-'a']+=(u) ;
        // cout<<u<<" "<<alpha[h-'a'][u]<<" "<<k<<endl;

    }

}

 }
 for(long long j=0;j<26;j++)
 {
     cout<<ans[j]<<" ";
 }
 cout<<endl;




}
 }

