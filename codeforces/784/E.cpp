#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k,l;
 cin>> n>>m>>k>>l;
 cout<<(((n ^ m) & (k | l)) ^ ((k & m) | (n ^ l)))<<endl;

}