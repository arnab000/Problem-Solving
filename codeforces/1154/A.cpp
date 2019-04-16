#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int>sura;
int k;
for( int i=0;i<4; i++)
{
    cin>>k;
    sura.push_back(k);
}
sort(sura.begin(),sura.end());
for( int i=0;i<3; i++)
{
    cout<<sura[sura.size()-1]-sura[i]<<" ";
}

}
