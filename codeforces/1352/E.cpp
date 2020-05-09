    #include<bits/stdc++.h>
    
    using namespace std;
     
    int main()
    {
     
        int test;
        cin>>test;
     
        while(test--)
        {
           int n;
          
           vector<int>sura;
           cin>>n;
           for(int i=0;i<n;i++)
           {
              int k;
              cin>>k;
              sura.push_back(k);

           }
              vector<int> prefix_sum(n+1, 0);
 
    for (int i = 0; i < n; i++)
        prefix_sum[i+1] = prefix_sum[i]+sura[i];
 
    vector<bool> special(n + 1, false);
 
    for (int i = 0; i < n; i++)
        for (int j = i + 2;j<=n&&prefix_sum[j]-prefix_sum[i]<= n; j++)
            special[prefix_sum[j] - prefix_sum[i]] = true;
 
    int ans = 0;
 
    for (int i =0; i< n;i++)
    {
       ans+= special[sura[i]];
    }
        
 
    cout <<ans<<endl;;

            
        }

    }