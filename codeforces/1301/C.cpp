#include <bits/stdc++.h>

using namespace std;



int main(){
    int n;
    cin >> n;
while(n--){

long long x,y;
cin>>x>>y;
long long p=y+1;
long long k=(x-y)/(y+1);
cout<<((x*(x+1))/2) - (((k*(k+1))/2)*p) -((x-y)%p)*(k+1)<<endl;

}
}
