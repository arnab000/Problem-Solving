#include<bits/stdc++.h>
using namespace std;
int main(){
   int x,y,z;
   char a,b,c,g;
   vector< pair<int,char> >sura;
   cin>>x>>a;


   sura.push_back(make_pair(x,a));
   cin>>y>>b;

   sura.push_back(make_pair(y,b));
   cin>>z>>c;

   sura.push_back(make_pair(z,c));

   sort(sura.begin(),sura.end());

   if(sura[2].first-sura[1].first==0 && sura[1].first-sura[0].first==0 && sura[2].second==sura[1].second && sura[1].second==sura[0].second )
   {
       cout<<0<<endl;
   }
   else if(sura[2].first-sura[1].first==1 && sura[1].first-sura[0].first==1 && sura[2].second==sura[1].second && sura[1].second==sura[0].second)
   {
       cout<<0<<endl;
   }
   else if(sura[2].first-sura[1].first<3 &&sura[2].second==sura[1].second)
   {
       cout<<1<<endl;
   }
   else if(sura[2].first-sura[0].first<3 &&sura[2].second==sura[0].second)
   {
       cout<<1<<endl;
   }
   else if(sura[1].first-sura[0].first<3 &&sura[1].second==sura[0].second)
   {
       cout<<1<<endl;
   }
   else{
    cout<<2<<endl;
   }


}
