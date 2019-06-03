
#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n,l,k;
   set<int>s;
    vector<int>sura;
    cin>>n;
    for(int i=0;i<2*n;i++)
    {
        cin>>l;
        sura.push_back(l);
        s.insert(l);
    }
    if(s.size()==1)
    {
        cout<<-1<<endl;
        return 0;
    }
    sort(sura.begin(),sura.end());
     for(int i=0;i<2*n;i++)
    {
        cout<<sura[i]<<" ";
    }




}
