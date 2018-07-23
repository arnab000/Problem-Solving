#include<iostream>
using namespace std;

int main()
{
    long long x,i=1,l=0;
    cin>> x;
    if(x%2!=0){
    x=x-1;
    l++;
    }
    while(1)
    {
          if(x==0)
            break;
i=1;
        while(x>=i)
        {
            i=i*2;


        }
        l++;
        if(i!=x)
        {
        i=i/2;

        }
        x=x-i;


    }
    cout<< l;
}