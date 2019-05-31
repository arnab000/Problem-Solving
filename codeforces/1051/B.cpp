#include<bits/stdc++.h>
using namespace std;
int main(){
 long long n,m,k,l=1,i;
 cin>>n>>m;

cout<<"YES"<<endl;
l=(m-n+1)/2;
for(i=0;i<l;i++)
{
    cout<<n<<" "<<n+1<<endl;
    n+=2;
}

}

