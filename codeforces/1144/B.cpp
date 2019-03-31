#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,i,j,k,l,sum=0;
 vector<int>odd;
 vector<int>even;
 cin>>n;
 for(i=0;i<n;i++)
 {
     cin>>k;
     if(k%2==0)
        even.push_back(k);
    else
        odd.push_back(k);


 }
 sort(even.begin(),even.end());
 sort(odd.begin(),odd.end());
 //cout<<even.size()<<" "<<odd.size()<<endl;
 if(even.size()>=odd.size())
 {
     l=even.size()-odd.size();
     for(i=0;i<l-1;i++)
     {
         sum+=even[i];
     }
 }
 else{

     l=odd.size()-even.size();
     for(i=0;i<l-1;i++)
     {
         sum+=odd[i];
     }
 }
 cout<<sum<<endl;

}
