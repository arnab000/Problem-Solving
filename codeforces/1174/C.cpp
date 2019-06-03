
#include <bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes(int n)
{

    int prime[n+1],cnt=1;
    memset(prime, 0, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {

        if (prime[p] == 0)
        {

             prime[p]=cnt;
            for (int i=p*p; i<=n; i += p)
                prime[i] = cnt;

                cnt++;
        }
    }


    for (int p=2; p<=n; p++)
       {
           if(prime[p]==0)
           {

               prime[p]=cnt;
                cnt++;
           }
       }

    for (int p=2; p<=n; p++)
       {
         cout<<prime[p]<<" ";
       }
}


int main()
{
    int n;
    cin>>n;

    SieveOfEratosthenes(n);
    return 0;
}
