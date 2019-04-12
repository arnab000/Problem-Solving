#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long i,j,l,k=0,m,n;
  stack<char>sura1;
  string sura;


    cin>>sura;
    sura1.push(sura[0]);
    for(i=1;i<sura.size();i++)
    {
        if(!sura1.empty()){
        if(sura1.top()==sura[i])
        {
            k++;
            sura1.pop();
        }

        else if(sura1.top()!=sura[i])
        {
            sura1.push(sura[i]);

        }
        }
       else if(sura1.empty())
       {
           sura1.push(sura[i]);
       }


    }
    //cout<<sura;


//cout<<k<<endl;
 if(k%2==0)
    cout<<"No"<<endl;
 else
    cout<<"Yes"<<endl;



}
