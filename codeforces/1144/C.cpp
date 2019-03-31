#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,i,j,k,l=0,sum=0;
vector<int>inc;
vector<int>dec;
vector<int>sura;
cin>>n;

for(i=0;i<n;i++)
{
    cin>>k;
    sura.push_back(k);
}
sort(sura.begin(),sura.end());
for(i=0;i<n;i++)
{
    l=1;
    while(sura[i]==sura[i+1] && i<n-1)
    {
        l++;
        if(l>2)
        {
            cout<<"No"<<endl;
            return 0;
        }

        dec.push_back(sura[i+1]);
        i++;
    }
inc.push_back(sura[i]);
}
cout<<"Yes"<<endl;
cout<<inc.size()<<endl;
for(i=0;i<inc.size();i++)
{
    cout<<inc[i]<<" ";
}
cout<<endl;
cout<<dec.size()<<endl;
if(dec.size()==0)
    cout<<endl;
else{
for(i=dec.size()-1;i>=0;i--)
{
    cout<<dec[i]<<" ";
}
}

}
