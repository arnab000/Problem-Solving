#include <bits/stdc++.h>
using namespace std;





int main() {
    long long test;
    cin>>test;

long long pasa=0;

    while(test--) {
long long a,b,c;
cin>>a>>b>>c;
long long i=min(a,b);
long long j=max(a,b);
vector<long long>ans;
while(c--)
{
long long l,r;
cin>>l>>r;


if(r<j)
{
ans.push_back(0);
continue;

}
if(j%i==0)
{

ans.push_back(0);
continue;
}
long long u=0;
long long lcm=(i*j)/__gcd(i,j);
if(j>l)
u+=j-l;
long long h=max(j,l);
long long d=(h-1)/lcm;
long long d1=r/lcm;

if(d1-d>0){

u+=(d1-d-1)*(j);
if(r%lcm<j)
u+=(r%lcm)+1;
else
u+=j;
}
long long y=h%lcm;
if(y<j && y>0)
u+=(j-y);


long long sss=(r-l+1)-u;
if(sss>0)
ans.push_back(sss);
else
ans.push_back(0);



}

for(long long paa=0;paa<ans.size();paa++)
{


cout<<ans[paa]<<" ";
}
cout<<endl;

}


}





