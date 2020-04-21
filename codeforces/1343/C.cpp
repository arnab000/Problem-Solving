    #include<bits/stdc++.h>
     
    #define ll long long
    using namespace std;
     
    int main(){
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            ll a[n];
            for(int i=0;i<n;i++){
                cin>>a[i];
            }
            
            int d=-1;
            if(a[0]>0)  d=0;
            else    d=1;
            
            ll max1=-2e9;
            ll ans=0;
            int l=0;
            while(l<n && ((d==0 && a[l]>0) || (d==1 && a[l]<0))){
                max1 = max(max1,a[l]);
                l++;
                if(l<n){
                    if(d==0 && a[l]<0){
                        d=1;
                        ans += max1;
                        max1 = -2e9;
                    }
                    else if(d==1 && a[l]>0){
                        d=0;
                        ans += max1;
                        max1 = -2e9;
                    }
                }
            }
            ans += max1;
            
            cout<<ans<<endl;
        }
    }