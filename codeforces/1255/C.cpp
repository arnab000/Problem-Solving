#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,tati;
        cin>>n;
        vector<int>sura[n+1];
        vector<int>q[n-2+1];
        map<int,bool>ma;
         map<int,int>ma1;
        vector<int>ans;
        for(int i=0;i<n-2;i++)
        {
           for(int j=0;j<3;j++)
           { int k;
           cin>>k;
           ma1[k]++;
           q[i].push_back(k);
           sura[k].push_back(i);

           }

        }

        for( int i=0;i<n-2;i++)
        {
            bool haga=false;
           for(int j=0;j<3;j++)
           {
           if(ma1[q[i][j]]==1)
           {
               ans.push_back(q[i][j]);
               ma[q[i][j]]=true;
               haga =true;
               break;
           }

           }
           if(haga)
           {
               for(int j=0;j<3;j++)
           {
           if(ma1[q[i][j]]==2)
           {
               ma[q[i][j]]=true;
               ans.push_back(q[i][j]);

               break;
           }

           }
           break;
           }


        }
        int i=ans[ans.size()-1];
       while(1)
        {

         for(int j=0;j<sura[i].size();j++)
         {
             int y=sura[i][j];
             int rr=0;
            for(int k=0;k<3;k++)
            {
               if(ma[ q[y][k]])
                rr++;
            }
            if(rr==2)
            {
                 for(int k=0;k<3;k++)
                 {
                     if(!ma[ q[y][k]])
                       {
                           ans.push_back(q[y][k]);
                           ma[ q[y][k]]=true;
                           i=q[y][k];
                       }
                  }
                  break;
            }
         }
         //cout<<ans.size()<<endl;
         if(ans.size()==n)
            break;

        }

        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;


}
