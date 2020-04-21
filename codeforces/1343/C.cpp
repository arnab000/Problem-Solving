    #include <bits/stdc++.h>
    using namespace std;
     
     
     
     
     
    int main() {
        long long test;
        cin>>test;
     
     
     
        while(test--) {
       long long n;
       cin>>n;
       vector<long long>ans;
     
       for(long long i=0;i<n;i++)
       {
       long long k;
       cin>>k;
       ans.push_back(k);
     
       }
       long long d=0;
       long long mx=0,mn=0;
       bool p=false,m=false;
          for(long long i=0;i<n;i++)
       {
       if(ans[i]<0)
       {
       if(!m)
       {
       d+=mx;
       m=true;
       p=false;
       mn=ans[i];
       }
       else
       mn=max(mn,ans[i]);
     
       }
      else  if(ans[i]>0)
       {
       if(!p)
       {
       d+=mn;
       p=true;
       m=false;
       mx=ans[i];
       }
       else
       mx=max(mx,ans[i]);
     
       }
     
       }
       if(p)
       d+=mx;
       else
       d+=mn;
       cout<<d<<endl;
     
     
     
     
     
        }
     
    }