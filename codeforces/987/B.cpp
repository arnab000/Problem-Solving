
#include<bits/stdc++.h>

using namespace std;
int main()
{

double x,y,i,j;
 cin>>x>>y;
 if (x==y)
    cout<<"="<<endl;
 else{
 i=(x*1.0)*log(y);
 j=(y*1.0)*log(x);

 if(i>j)
    cout<<"<"<<endl;
 else if(i<j)
    cout<<">"<<endl;
 else
    cout<<"="<<endl;}
}
