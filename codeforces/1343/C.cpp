    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        long long t;
        cin >> t;
        while(t--)
        {
            long long n,i,j,x,mx,s1=0,s2=0,l1,l2;
            cin >> n;
            vector<long long> v(n);
            for(i=0; i<n; i++)
                cin >> v[i];
            vector<long long> tmp1,tmp2;
            for(i=0; i<n; i++){
              if(tmp1.empty() || tmp1.back()<0){
                if(v[i]<0) continue;
                mx=0;
                while(i<n && v[i]>0) mx=max(mx,v[i]),i++;
                i--;
                if(mx!=0){
                  tmp1.push_back(mx);
                }
                continue;
              }
              if(v[i]>0) continue;
              mx=   INT_MIN;
              while(i<n && v[i]<0) mx=max(mx,v[i]),i++;
              i--;
              if(mx!=INT_MIN){
                tmp1.push_back(mx);
              }
            }
            for(i=0; i<n; i++){
              if(tmp2.empty() || tmp2.back()>0){
                if(v[i]>0) continue;
                mx=INT_MIN;
                while(i<n && v[i]<0) mx=max(mx,v[i]),i++;
                i--;
                if(mx!=INT_MIN){
                  tmp2.push_back(mx);
                }
                continue;
              }
              if(v[i]<0) continue;
              mx=0;
              while(i<n && v[i]>0) mx=max(mx,v[i]),i++;
              i--;
              if(mx!=0){
                tmp2.push_back(mx);
              }
            }
            l1=tmp1.size();
            l2=tmp2.size();
            for(i=0; i<l1; i++) s1+=tmp1[i];
            for(i=0; i<l2; i++) s2+=tmp2[i];
            if(l1>l2) cout << s1 << "\n";
            else if(l2>l1) cout << s2 << "\n";
            else cout << max(s1,s2) << "\n";
        }
        return 0;
    }