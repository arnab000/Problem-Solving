#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k=0,l=0,n;
    cin>>n;
    for(i=5;i<=sqrt(n);i++)
    {
       if(n%i==0 &&(n/i)>=5)
       {
           k=n/i;
           l=i;
       }
    }
    if(k==0 && l==0)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    char sura[k+1][l+1];
  
    for(i=0;i<k;i++)
    {
        int y=(i+1)%5;
        if(y==1)
            sura[i][0]='a';
        else if(y==2)
            sura[i][0]='e';
        else if(y==3)
            sura[i][0]='i';
        else if(y==4)
            sura[i][0]='o';
        else if(y==0)
            sura[i][0]='u';
    }
    for(i=0;i<k;i++)
    {
        for(j=1;j<l;j++)
        {

            if(sura[i][j-1]=='a')
            sura[i][j]='e';
              if(sura[i][j-1]=='e')
            sura[i][j]='i';
             if(sura[i][j-1]=='i')
            sura[i][j]='o';
             if(sura[i][j-1]=='o')
            sura[i][j]='u';
             if(sura[i][j-1]=='u')
            sura[i][j]='a';

        }

    }
       for(i=0;i<k;i++)
    {
        for(j=0;j<l;j++)
        {

            cout<<sura[i][j];

        }

    }


}
