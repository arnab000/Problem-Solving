#include <bits/stdc++.h>
using namespace std;
 vector<pair<int,int> >sura;
int cnt=0;
void check()
{
    int hehe=INT_MAX,k;
    for(int i=0;i<sura.size();i++)
    {
        k=sura[i].second/sura[i].first;
        hehe=min(hehe,k);
    }

    cnt+=hehe;
     for(int i=0;i<sura.size();i++)
    {
       sura[i].second=sura[i].second-(hehe*sura[i].first);
    }
   // cout<<cnt<<endl;
}
int main(){
    int i,j,k,l,m;
    vector<int>a;
    vector<int>b;

    cin>>k>>m;
    for(i=0;i<k;i++)
    {
        cin>>l;
        a.push_back(l);

    }
     for(i=0;i<k;i++)
    {
        cin>>l;
        sura.push_back(make_pair(a[i],l));

    }

    check();
  while(1)
  {
      int y;
     for(i=0;i<k;i++)
    {
        //cout<<sura[i].first<<" "<<sura[i].second<<endl;
        if(sura[i].first>sura[i].second)
         {

           y=sura[i].first-sura[i].second;
           //cout<<y<<endl;
           //cout<<m<<endl;

        if(m>=y)
           {
             sura[i].second=sura[i].second+y;
             m=m-y;
           }

       }

    }
    int x= cnt;
//cout<<m<<endl;
    check();
    if(m<=0 || x==cnt)
        break;
  }
  cout<<cnt<<endl;


}
