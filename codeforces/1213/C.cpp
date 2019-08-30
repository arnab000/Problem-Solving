#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        long long x,y,k,sura=0,i;
        cin>>x>>y;
        long long m=x/y;
        if(m<10){
            for( i=1; i<=m; i++)
                sura+=(i*y)%10;
            cout<<sura<<endl;
            continue;
        }
        else{
            for( i=1; i<=10; i++)
                sura += (i*y)%10;

            sura *= (x/y)/10;
            k = (x/y)%10;


            for( i=1; i<=k; i++)
            sura+=(i*y)%10;

            cout<<sura<<endl;
            continue;
        }
    }
}
