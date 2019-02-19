#include<bits/stdc++.h>
using namespace std;
int main()
{
int i,j,n,k,t,l;

cin>>n>>k;
set<int>s;
int arr[n],ar[n];
for(i=1;i<=n;i++)
{
    cin>>arr[i];
}
for(i=n;i>0;i--)
{
    s.insert(arr[i]);
    ar[i]=s.size();




}


for(i=0;i<k;i++)
{
    cin>>l;
    cout<<ar[l]<<endl;


}




}
