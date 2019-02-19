
#include<bits/stdc++.h>
using namespace std;

int main()
{


int n,k,l,i,j,es=0,os=0,sura=0;
cin>>n;
int v[n+1],odd[n+1],even[n+1];

for(i=1;i<=n;i++)
{
    cin>>l;
    v[i]=l;

    if(i==1)
    {
        even[i]=0;
        odd[i]=l;
        os+=l;
    }
    else if(i%2==0)
    {
        even[i]=even[i-1]+l;
        odd[i]=odd[i-1];
        es+=l;
    }
      else if(i%2!=0)
    {
        even[i]=even[i-1];
        odd[i]=odd[i-1]+l;
        os+=l;
    }

}


for(i=1;i<=n;i++)
{       int o=0,e=0;
    if(i==1)
    {
        e=os-v[i];
        o=es;
    }
    else if(i>1){
         o=es-even[i]+odd[i-1];
         e=os-odd[i]+even[i-1];

    }
        if(o==e)
            sura++;

}
cout<<sura<<endl;

}


