#include<bits/stdc++.h>
using namespace std;
int main()
{
long long n,k;
vector<long long>sura;
cin>>n;
for(int i=0;i<n;i++)
{
     k;
    cin>>k;
    sura.push_back(k);
}
sort(sura.rbegin(),sura.rend());
long long ans;
long long x=0,y=0;
if(n%2==0)
    k=n/2;
    else
         k=n/2+1;

for(int i=0;i<k;i++)
{
    x+=sura[i];

}
for(int i=k;i<n;i++)
{
    y+=sura[i];

}

cout<<x*x+y*y<<endl;


}
