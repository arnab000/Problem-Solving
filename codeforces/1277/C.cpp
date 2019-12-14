#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--){
        string sura;
        vector<int> haha;
        cin >> sura;
        if(sura.size()==1 || sura.size()==2){
            cout<<0<< endl;
            cout<<endl;
            continue;
        }

        for(int i=2; i<sura.size()-2; i++){
            if(i>1  && sura[i+2]=='e' && sura[i-1]=='w' && sura[i-2]=='t' && sura[i]=='o' && sura[i+1]=='n'){
                sura[i]='1';
                haha.push_back(i+1);
            }
        }
        for(int i=1; i<sura.size()-1; i++){
            if(sura[i]=='w' && sura[i-1]=='t' && sura[i+1]=='o')
                haha.push_back(i+1);
            else if(sura[i]=='n'  && sura[i+1]=='e'&& sura[i-1]=='o')
             haha.push_back(i+1);
        }
        cout<<haha.size()<<endl;
        for(int i=0; i<haha.size(); i++)
            cout << haha[i] << " ";
        cout<<endl;
    }
}
