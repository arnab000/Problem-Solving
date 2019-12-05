#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,j;
        set<int>s;
        cin>>n;
        map<int,int>ma;
        for(int i=0;i<n;i++)
        {
            int k;
            cin>>k;
            ma[k]++;
            s.insert(k);
        }
        int go=0,si=0,bo=0;
 for (set<int>::reverse_iterator it=s.rbegin(); it!=s.rend(); ++it)
      {
          if(go<=0 && si+ma[*it]+go+bo<=n/2)
          {
              go+=ma[*it];
          }
          else if(si<=go && si+ma[*it]+go+bo<=n/2)
          {
              si+=ma[*it];
          }
          else if(si+ma[*it]+go+bo<=n/2)
          {
              bo+=ma[*it];
          }
          else
            break;
           //cout<<g<<" "<<s<<" "<<b<<endl;
      }
      // cout<<g<<" "<<s<<" "<<b<<endl;
      if(si+go+bo<=n/2 && go<si && go<bo && go>0 &&si>0 && bo>0)
      {
          cout<<go<<" "<<si<<" "<<bo<<endl;
      }
      else
      {
          cout<<0<<" "<<0<<" "<<0<<endl;
      }
    }
}