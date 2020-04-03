#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
 
 
int main()
{
 
    int test;
    cin >> test;
    while(test--){
        int n, all=0;
        cin >> n;
        int t[n], col[n];
 
        for(int i=0; i<n; i++){
            cin >> t[i];
        }
 
        col[0] = 1;
        for(int i=1; i<n; i++){
            if(t[i] == t[i-1]) col[i] = col[i-1];
            else col[i] = 3-col[i-1];
        }
        if(col[n-1]==col[0] && t[n-1] != t[0]){
            bool flag = 0;
            for(int i=1; i<n; i++){
                if(t[i] == t[i-1] && !flag){
                    col[i] = 3-col[i-1];
                    flag = 1;
                }
                else if(t[i] == t[i-1]) col[i] = col[i-1];
                else col[i] = 3-col[i-1];
            }
            if(col[n-1]==col[0] && t[n-1] != t[0]){
                col[n-1] = 3;
            }
        }
        for(int i=0; i<n; i++) all = max(all, col[i]);
        cout << all << endl;
        for(int i=0; i<n; i++){
            cout << col[i] << " ";
        }
        cout << endl;
    }
 
 
}