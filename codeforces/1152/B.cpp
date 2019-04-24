#include<bits/stdc++.h>
using namespace std;
int f(int n){
    int i=1,x=0;
    while(n>0){
        if(!(n&1)) x=i;
        i++;
        n>>=1;
    }
    return x;
}

int main(){

    int n,i,l=0,k=0,m=0;
    cin>>n;
    vector<int>v;
    int p=n,sura=0,x=0;
         while(p>0){
        if(!(p&1)) x=sura+1;
        p>>=1;
        sura++;
    }
    if(x==0)
        {
            cout<<0<<endl;
            return 0;

        }
    while(1){
        vector<int >v1;
       // cout<<n<<endl;
        k=f(n);


        v.push_back(k);

        int s=1;
        for(i=1;i<=k;i++){
            s*=2;
        }

        s--;
         //cout<<s<<endl;
        n=n^s;
       // cout<<n<<endl;
       m++;
       p=n,sura=0,x=0;
         while(p>0){
        if(!(p&1)) x=sura+1;
        p>>=1;
        sura++;
    }
    if(x==0)
        break;

        n++;
        p=n,sura=0,x=0;
         while(p>0){
        if(!(p&1)) x=sura+1;
        p>>=1;
        sura++;
    }
    m++;
    if(x==0)
        break;


    }
    cout<<m<<endl;
    for(int y=0;y<v.size();y++)
    {
        cout<<v[y]<<" ";
    }
}
