#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int test;
    cin>>test;
    while(test--){
        string sura;
        cin>>sura;
        int l=0;
        for(int i=0;i<sura.size()-1;i++){
            if(sura[i]==sura[i+1] && sura[i]!='?'){
                l=1;
                break;
            }
            if(sura[0]=='?'){
                if(sura[1]!='a')
                    sura[0]='a';
                else if(sura[1]!='b')
                   sura[0]='b';
                else if(sura[1]!='c')
                    sura[0]='c';
            }
            if(sura[i]=='?'){
                if(sura[i-1]=='a'){
                    if(sura[i+1]!='b'){
                        sura[i]='b';
                    }
                    else if(sura[i+1]=='b')
                       sura[i]='c';
                }
                else if(sura[i-1]=='b'){
                    if(sura[i+1]!='c'){
                        sura[i]='c';
                    }
                    else if(sura[i+1]=='c')
                        sura[i]='a';
                }
                else if(sura[i-1]=='c'){
                    if(sura[i+1]!='a'){
                        sura[i]='a';
                    }
                    else if(sura[i+1]=='a')
                       sura[i]='b';
                }
            }
        }
        int k=sura.size()-1;
        if(sura[k]=='?'){
            if(sura[k-1]!='a')
                sura[k]='a';
            else if(sura[k-1]!='b')
                sura[k]='b';
            else if(sura[k-1]!='c')
                sura[k]='c';
        }
 
        if(l==1)
            cout<<-1<<endl;
        else
            cout<<sura<<endl;
    }
}