#include<bits/stdc++.h>
using namespace std;

int main()
{

long long i,j,m,n,k,x,y,sum=0;
cin>>n>>k;
vector<long long>sura;
vector<pair<long long,long long> >dada;
vector<pair<long long,long long> >dada2;
vector<long long>su;
long long arr[n];
priority_queue<long long,vector<long long>,greater <long long> >pq;
for(i=0;i<n;i++)
{
    cin>>x;
    sura.push_back(x);
}
for(i=0;i<n;i++)
{
    cin>>x;
    dada.push_back(make_pair(sura[i],x));
    dada2.push_back(make_pair(sura[i],i));
}

sort(dada.begin(),dada.end());
sort(dada2.begin(),dada2.end());
for(i=0;i<n;i++)

{
    if(k==0){
    su.push_back(sum+dada[i].second);
    }
    else if(k>0){
           su.push_back(sum+dada[i].second);
      if(i<k)
    {
        sum+=dada[i].second;
    pq.push(dada[i].second);


    }
   else{

         if(dada[i].second>pq.top())
         {

             sum-=pq.top();
             pq.pop();

             sum+=dada[i].second;
             pq.push(dada[i].second);



         }
     }

   }
}





for(i=0;i<n;i++)
{
   arr[dada2[i].second]=su[i];

}
for(i=0;i<n;i++)
{
   cout<<arr[i]<<" ";

}

}


