#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    bool p=false,m=false;
    cin >> n;
    vector<long long>sura;
     vector<long long>ans;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;


        sura.push_back(k);
    }
    for(int i=0;i<n;i++)
    {
        if(sura[i]%2!=0 )
        {
            if(p==true && sura[i]>0 && m==false)
            {
               cout<<sura[i]/2<<endl;
               p=false;


            }
            else if(p==false && m==true && sura[i]>0)
            {
                cout<<(sura[i]/2) <<endl;
                m=false;
            }
           else if(p==false && m==false && sura[i]>0)
            {
                 cout<<(sura[i]/2)+1 <<endl;
                 p=true;

            }
            else if(p==false && m==true && sura[i]<0)
            {


                cout<<(sura[i]/2) -1<<endl;
                m=false;

            }
            else if(p==true && m==false && sura[i]<0)
            {
                //cout<<sura[i]/2<<endl;
                cout<<(sura[i]/2) -1<<endl;
                p=false;
            }
             else if(p==false && m==false && sura[i]<0)
            {
                cout<<sura[i]/2<<endl;
                m=true;
            }


        }
        else
            cout<<sura[i]/2<<endl;
    }


}
