


    #include <bits/stdc++.h>
    using namespace std;
     
     
     
     
     
    int main() {
        long long test;
        cin>>test;
     
     
     
        while(test--) {
            long long n,k,a,b;
            cin>>n>>k;
            cin>>a>>b;
            long long ans=0,ans1=0;
          
     
            long long i=max(n,k);
            long long j=min(k,n);
     
            ans+=i*a+j*a;
            
            ans1+=(i-j)*a+j*b;
            
            cout<<min(ans,ans1)<<endl;
     
     
     
     
     
        }
     
    }