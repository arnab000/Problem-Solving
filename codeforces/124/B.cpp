#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m ,i,j,k,l,ma=-1,baba=INT_MAX,diff=INT_MAX;

  cin>>n>>m;
  char a;
  vector<char>sura[9];
  int arr[m+1];
  for(i=0;i<n;i++)
  {
      for(j=0;j<m;j++)
      {
          cin>>a;
         sura[i].push_back(a);
      }
  }
  for(j=0;j<m;j++)
  {
     arr[j]=j;
  }
  //cout<<endl;

  do {
        ma=-1,baba=INT_MAX;
 for(i=0;i<n;i++)
 {
     int s=0,p=1;

     for(j=0;j<m;j++)
     {

         int k = sura[i][arr[j]]-'0';
         s+=p*k;
         p*=10;
     }

      ma=max(ma,s);
      baba=min(baba,s);
 }
 // cout<<ma<<" "<<baba<<endl;
 diff=min(diff,ma-baba);

  } while ( next_permutation(arr,arr+m) );
  cout<<diff<<endl;

}