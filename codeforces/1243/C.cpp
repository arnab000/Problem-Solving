#include<bits/stdc++.h>
using namespace std;

void primeFactors(long long n)
{
    set<long long>sura;
    set<long long>::iterator it;
    while (n % 2 == 0)
    {
        sura.insert(2);
        n = n/2;
    }


    for (int i = 3; i <= sqrt(n); i = i + 2)
    {

        while (n % i == 0)
        {
            sura.insert(i) ;
            n = n/i;
        }
    }


    if (n > 2)
        sura.insert(n)  ;

        if(sura.size()==1 )
        {
            it=sura.begin();
            cout<<*it<<endl;
        }
        else
        {

            cout<<1<<endl;
        }

}



int main()
{
  long long n;
  cin>>n;
  primeFactors(n);

}
