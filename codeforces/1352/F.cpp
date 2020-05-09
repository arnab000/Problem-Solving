    #include<bits/stdc++.h>
    
    using namespace std;
     
    int main()
    {
     
     long long test;
     cin>>test;
     while(test--)
     {
         long long n,m,k;
         cin>>n>>m>>k;
         string sura, ans;
         if(m>0)
         {
             sura+='0';
             sura+='1';
         }
         for(long long i=0;i<m-1;i++)
         {
             sura+=('0'+(i&1));
         }
         if(n==0 && m==0)
         sura+='1';
         if(m==0 && k==0)
         sura+='0';
         for(long long i=0;i<sura.size();i++)
         {
              ans+=sura[i];
              if(ans.back()=='0')
              {
                  while(n)
                  {
                      ans+='0';
                      n--;
                  }
              }
              if(ans.back()=='1')
              {
                  while(k)
                  {
                      ans+='1';
                      k--;
                  }
              }
         }
         cout<<ans<<endl;
     }
            
        

    }