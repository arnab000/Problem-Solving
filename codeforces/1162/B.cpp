#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long n,m,i,j;
    cin>>n>>m;
    long long sura[n+1][m+1],dada[n+1][m+1],hehe[n+1][m+1],haha[n+1][m+1];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
            cin>>sura[i][j];
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
            cin>>dada[i][j];
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            hehe[i][j]=min(sura[i][j],dada[i][j]);
            haha[i][j]=max(sura[i][j],dada[i][j]);
        }
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<m-1;j++){
            if(hehe[i][j]>=hehe[i+1][j] || hehe[i][j]>=hehe[i][j+1]){
                cout<<"Impossible"<<endl;
                return 0;
            }
            else if(haha[i][j]>=haha[i+1][j] || haha[i][j]>=haha[i][j+1]){
                cout<<"Impossible"<<endl;
                return 0;
            }
        }

    }
    for(i=n-1;i<n;i++){
        for(j=0;j<m-1;j++){
            if(hehe[i][j]>=hehe[i][j+1]){
                cout<<"Impossible"<<endl;
                return 0;
            }
            else if(haha[i][j]>=haha[i][j+1]){
                cout<<"Impossible"<<endl;
                return 0;
            }
        }
    }
    for(j=m-1;j<m;j++){
        for(i=0;i<n-1;i++){
            if(hehe[i][j]>=hehe[i+1][j] ){
                cout<<"Impossible"<<endl;
                return 0;
            }
            else if(haha[i][j]>=haha[i+1][j] ){
                cout<<"Impossible"<<endl;
                return 0;
            }
        }
    }
    cout<<"Possible"<<endl;

}