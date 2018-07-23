#include<iostream>
#include<math.h>
using namespace std;
long long isPrime(long long,long long);

int main()
{
    long long i,j,m,k,c=0;
    cin>>m;
    long long a[m];

    for(i=0;i<m;i++)
    {
        cin>>a[i];

}
for(i=0;i<m;i++)
{
    if(i!=0 && a[i]==a[i+1])
    {
    if(c==1)
        cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


            continue;


    }
    k=sqrt(a[i]);
    if(k*k!=a[i]||k==1)
    {
        cout<<"NO"<<endl;
        continue;

    }



   c=isPrime(k,sqrt(k));

    if(c==1)
        cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }

}
long long isPrime(long long num,long long i){

    if(i==1){
        return 1;
    }else{
       if(num%i==0)
         return 0;
       else
         isPrime(num,i-1);
    }
}






