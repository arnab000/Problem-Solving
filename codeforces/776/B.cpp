#include <bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes(int n)
{

    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {

        if (prime[p] == true)
        {

            for (int i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }

    for (int p=2; p<=n; p++)
     {
       if (prime[p])
          cout << 1 << " ";
       else
        cout<<2 <<" ";
     }

}


int main()
{
    int n;
    cin>>n;
    if(n==1)
        cout<<1<<endl;
    else if(n==2)
        cout<<1<<endl;
    else
        cout<<2<<endl;

    SieveOfEratosthenes(n+1);
    return 0;
}
