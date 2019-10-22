#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        vector<int>sura;

for(int i=0;i<n;i++)
{
    int p;
    cin>>p;
    sura.push_back(p);
}

    for(int i=0;i<n;i++)
    {
        int k=i;
        int c=1;
        while(sura[k]!=i+1)
        {
            k=sura[k];
            c++;
            k--;
        }
        cout<<c<<" ";

    }
    cout<<endl;
}
}
