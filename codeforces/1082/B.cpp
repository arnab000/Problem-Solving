#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m=0,h=0,i,j=0,k;
int     fo=-1;
  int  lo=0;
    string s;
    vector<int>sura;
    vector<int>ans;
    sura.push_back(0);
    cin>>n;

    cin>>s;
   // cout<<s<<endl;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='S' )
        {
            sura.push_back(i+1);
            m++;
        }

        if(s[i]=='G' && fo==-1)
        {
        fo=i;
        }
         if(s[i]=='G' )
        {
        lo=i;
        }
    }
    if(j==1)
    {
        cout<<1<<endl;
        return 0;
    }
    //cout<<m<<endl;
    sura.push_back(s.size()+1);
    if(m<=0)
    {
        cout<<s.size()<<endl;
        return 0;
    }
    for(i=1;i<sura.size()-1;i++)
    {

        ans.push_back((sura[i]-sura[i-1])+(sura[i+1]-sura[i])-2);
    }
for(i=0;i<n;i++)
{
    if(s[i]=='S'&& i>fo && i<lo)
    {
        h++;
    }
}

    if(h<2 )
    {
          sort(ans.begin(),ans.end());
        cout<<ans[ans.size()-1]<<endl;
    }
    else
    {
        sort(ans.begin(),ans.end());
        cout<<ans[ans.size()-1]+1<<endl;
    }
}
