#include<bits/stdc++.h>
using namespace std;

int main()
{
 int n;
 cin>>n;
 int odd=0;
 int even=0;
 for(int i=0;i<n;i++){
     int k;
 cin>>k;

        if(k%2==0)
            odd++;
        else
            even++;

 }
 cout<<min(even,odd)<<endl;
}
