#include<bits/stdc++.h>
using namespace std;

int main()
{

int i,x,y,n,m,sum=0,sum2=0,sum3=0;
vector<int>sura;
vector<int>sura1;
vector<int>sura2;
cin>>n;
for(i=0;i<n;i++)
{
    cin>>x;
    sura.push_back(x);




}

int opsize =1<<n;

    for (int counter = 1; counter < opsize; counter++)
    {
      sum2=0;
        for (int j = 0; j < n; j++)
        {
            if (counter & (1<<j))
                sum2+=sura[j];
                else
                    sum2-=sura[j];
        }

    if(sum2%360==0){
            cout<<"YES"<<endl;
            return 0;


        }



    }
cout<<"NO"<<endl;





}


