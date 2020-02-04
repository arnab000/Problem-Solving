#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
while(n--)
{
 long long h;
 string s;
 cin>>h;
 cin>>s;
 long long arr[h+1];
 
 long long ans=0;
 long long an=INT_MAX;
 long long l,r;
 
 map<long long,bool>ma;
 
 for(long long i=0;i<s.size();i++)
 {
     if(s[i]=='L')
     ans+=1;
      else if(s[i]=='R')
        ans-=1;
 
      else  if(s[i]=='U')
       ans+=(20000001);
       else  if(s[i]=='D')
        ans-=(20000001);
 
         arr[i]=ans;
 
        if(arr[i]==0)
        {
            bool hbe=false;
            long long j;
            for(j=i-1;j>=0;j--)
          {
              if(arr[j]==0)
                {
                    hbe=true;
                    break;
                }
 
          }
 
          if(i-j<an && hbe==true)
          {
              an=i-j;
              l=j+2;
              r=i+1;
 
          }
          else if(i+1<an)
          {
               an=i+1;
              l=1;
              r=i+1;
          }
           ma[0]=true;
          continue;
        }
 
      if(ma[ans]==true)
      {
 
          long long j;
          for(j=i-1;j>=0;j--)
          {
              if(arr[j]==ans)
                break;
          }
          if(i-j<an)
          {
              an=i-j;
              l=j+2;
              r=i+1;
 
          }
 
      }
      else
      {
          ma[arr[i]]=true;
 
      }
      if(an==2)
      break;
 
 }
 if(an==INT_MAX)
    cout<<-1<<endl;
 else
    cout<<l<<" "<<r<<endl;
 
}
 
}