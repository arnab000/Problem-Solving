#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m=0,i,l=0,k=0;
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
        
        i=n;
        l=0;
        while(i>0){
            

            if(i%2==0)
                k=l;
            i/=2;
            l++;

        }
       // cout<<k+1<<endl;

        v.push_back(k+1);

        int s=1;
        for(i=1;i<=k+1;i++){
            s*=2;
        }

        s--;
        // cout<<s<<endl;
        n=n^s;
        m++;
        //cout<<n<<endl;
         p=n,sura=0,x=0;
         while(p>0){
        if(!(p&1)) x=sura+1;
        p>>=1;
        sura++;
    }
    if(x==0)
        break;
        n++;
        m++;
        p=n,sura=0,x=0;
         while(p>0){
        if(!(p&1)) x=sura+1;
        p>>=1;
        sura++;
    }
    if(x==0)
        break;


    }
    cout<<m<<endl;
    for(int y=0;y<v.size();y++)
    {
        cout<<v[y]<<" ";
    }
}
