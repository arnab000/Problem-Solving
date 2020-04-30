#include<bits/stdc++.h>
using namespace std;

long long dp[2001][2001];
vector<long long>sura;
long long n,k,l,r;

long long sleep(long long s, long long i )
{

if(i>=n)
return (s>=l && s<=r );
else if(dp[i][s]!=-1)
return dp[i][s];
else if(s>=l && s<=r){
dp[i][s]=1+(max(sleep((s+sura[i])%k,i+1),sleep((s+sura[i]-1)%k,i+1)));
return dp[i][s];
}
else{
dp[i][s]=(max(sleep((s+sura[i])%k,i+1),sleep((s+sura[i]-1)%k,i+1)));

return dp[i][s];
}

}



int main()
{

cin>>n>>k>>l>>r;
for(long long i=0;i<2001;i++)
 for(long long j=0;j<2001;j++)
    dp[i][j]=-1;
for(long long i=0;i<n;i++)
{

long long h;
cin>>h;
sura.push_back(h);


}
cout<<max(sleep((0+sura[0])%k,1),sleep((0+sura[0]-1)%k,1))<<endl;






}
