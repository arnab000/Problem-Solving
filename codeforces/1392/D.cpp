

    #include<bits/stdc++.h>
    using namespace std;
    vector<int> v;
    int t,n,x,k;
    string s;
    bool f;
    int main()
    {
        cin >> t;
        while(t--){
            cin >> n >> s;
            for(int i=0; i<n-1; i++) if(s[i]!=s[i+1]) f=true;
            if(!f){
                cout << (n+2)/3 << "\n";
                continue;
            }
            
            for(int i=0; i<n; i++){
                k=1;
                while(i<n-1 && s[i]==s[i+1]) k++,i++;
                v.push_back(k);
            }
            if(s[0]==s[n-1]) v[0]+=v.back(),v.pop_back();
            for(auto it: v) x+=it/3;
            cout << x << "\n";
            x=0;
            f=false;
            v.clear();
        }
        return 0;
    }






   
      
    
        

