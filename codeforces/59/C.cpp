#include<bits/stdc++.h>
using namespace std;
int  main()
{
int n;
cin>>n;
string s;
cin>>s;
bool hbe=true;
int arr[n+1]={0};

for(int j=0;j<s.size();j++)
{
    arr[s[j]-'a']++;
}
for(int j=0;j<s.size();j++)
{
    if((s[j]-'a')>=n){
        hbe=false;
        break;
    }
}


int co=0,so=0;

 for(int i=0;i<s.size()/2;i++)
    {
        if(s[i]==s[s.size()-i-1] && s[i]=='?')
            co++;
    }
    if(s[(s.size()/2)]=='?' && s.size()%2!=0)
        co++;

    for(int j=0;j<n;j++)
{
    if(arr[j]==0)
    so++;

}



    for(int i=0;i<s.size()/2;i++)
    {
         if(s[i]==s[s.size()-i-1])
        {
            if(s[i]=='?')
            {
                char baal;
                bool hoise=false;
                if(co>so){
               baal='a';
                hoise=true;
               co--;
                }
                else{
                for(int j=0;j<n;j++)
               {

                 if(arr[j]==0)
                 {
                     arr[j]+=2;
                     baal=j+'a';
                     hoise=true;
                     break;
                     //so--;
                 }

               }
                }
               if(!hoise)
                baal='a';
                //cout<<co<<endl;
                s[i]=baal;
                s[s.size()-i-1]=baal;
            }
        }
       else if(s[i]!=s[s.size()-i-1])
        {
            if(s[i]!='?' && s[s.size()-i-1]!='?' )
                {
                    hbe=false;
                    break;
                }
               else if(s[i]!='?' && s[s.size()-i-1]=='?' )
                {
                    s[s.size()-i-1]=s[i];
                }
               else if(s[i]=='?' && s[s.size()-i-1]!='?' )
                {
                    s[i]=s[s.size()-i-1];
                }

        }

          if(!hbe)
            break;
    }
    if(s.size()%2!=0 && s[(s.size()/2)]=='?'){
               bool hoise=false;
             char baal;
                for(int j=0;j<n;j++)
               {
                 if(arr[j]==0)
                 {
                     arr[j]+=2;
                     baal=j+'a';
                    hoise=true;
                     break;
                 }
               }
               if(!hoise)
                baal='a';
         s[(s.size()/2)]=baal;
    }
      for(int j=0;j<n;j++)
               {
                 if(arr[j]==0)
                 {
                    hbe=false;
                 }
               }

    if(hbe)
        cout<<s<<endl;
    else
        cout<<"IMPOSSIBLE"<<endl;

}