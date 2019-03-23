#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int y, n, dada = 0, sura = 0;
    cin >> y;
    for(int i = 1; i <= y; i++){
        cin >> n;
        if(n== i && dada <= i){
            sura++;
        } else if(n> dada){
            dada = n;
        }
    }
    cout << sura << endl;
   
}