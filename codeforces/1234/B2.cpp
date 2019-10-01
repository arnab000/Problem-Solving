#include<bits/stdc++.h>
using namespace std;
map<long long,bool>sura;
int main()
{
    long long n,k,l;
    cin>>n>>k;
    vector<long long >haha;
    queue<long long>q;

    for(int i=0;i<n;i++)
    {
        cin>>l;
        if(sura[l]==false)
        {
            q.push(l);
            sura[l]=true;
        }


        if(q.size()==k+1){

            long long x=q.front();
            sura[x]=false;
            q.pop();
        }

    }
    cout<<q.size()<<endl;

   while(!q.empty())
   {
       haha.push_back(q.front());
       q.pop();
   }
   for(long long i=haha.size()-1;i>=0;i--)
   {
       cout<<haha[i]<<" ";
   }
}
