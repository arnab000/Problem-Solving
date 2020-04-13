#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long  test;
    cin>>test;
    while(test--){
        long long n,a,b;
        cin>>n>>a>>b;

        int z=0;

        string sura="";
        for(int i=0;i<n;i++){
            sura+=(char)97+z;
            z++;
            z=z%b;
        }
        cout<<sura<<endl;
    }
}
