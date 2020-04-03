#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while(test--){
        long long  n,x,k,i;
        cin>>n>>x;
        int haha[208];
        for(i=0; i<208; i++)
            haha[i]=0;
        for( i=0; i<n; i++){
            cin >> k;
            haha[k]++;
        }
        for( i=1; x; i++){
            if(!haha[i]){
                x--;
                haha[i]++;
            }
        }
        for( i=1; i<208; i++){
            if(haha[i]==0) break;
        }
        cout << --i << endl;
    }

}
