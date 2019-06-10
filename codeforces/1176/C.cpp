#include<bits/stdc++.h>
using namespace std;
int main(){
    int sura[6]={0};
    int x,y,i,j,n,f=1000000;
    bool flag;
    cin>>n;

    for(i=0;i<n;i++){
        cin>>x;
        //flag=true;
        if(x==4){
            y=0;
        }
        else if(x==8){
            y=1;
        }
         else if(x==15){
            y=2;
        }
         else if(x==16){
            y=3;
        }
         else if(x==23){
            y=4;
        }
         else if(x==42){
            y=5;
        }
        sura[y]++;
        for(j=0;j<y;j++)
        {
            if(sura[y]>sura[j])
            {
                sura[y]--;
                break;
            }
        }
    }
    for(i=0;i<6;i++)
    {
        f=min(f,sura[i]);
    }
    cout<<n-(6*f)<<endl;
}
