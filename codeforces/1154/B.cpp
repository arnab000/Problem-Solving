#include<bits/stdc++.h>
using namespace std;
int main()
{
set<int>sura;
vector<int>a;

int k,n;
int dada=0;
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>k;
  sura.insert(k);
 if(sura.size()>dada)
 {
     a.push_back(k);
 }


    dada=sura.size();
}

sort(a.begin(),a.end());
if(sura.size()>3)
{
    cout<<-1<<endl;
    return 0;

}
if(sura.size()==1)
{
      cout<<0<<endl;
    return 0;
}
if(sura.size()==2)
{
    int x= a[1]-a[0];
    int y=x/2;
    if(y*2==x)
      cout<<y<<endl;
    else
        cout<<x<<endl;
    return 0;

}
if(sura.size()==3)
{
   ;
    if((a[2]-a[1])==(a[1]-a[0]))
      cout<<a[2]-a[1]<<endl;
    else
        cout<<-1<<endl;
    return 0;

}
}
