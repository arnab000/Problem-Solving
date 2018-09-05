#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m=0,i;
    cin>>n;
    int a[n];
    char s[100];
     for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    getchar();
    for(i=0;i<n;i++)
    {


        gets(s);
        int p=strlen(s);
        int k=0;
        for(int j=0;j<p;j++)
        {
            if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'||s[j]=='y')
                k++;
        }

        if(k==a[i])
            m++;
    }

    if(n==m)
        cout<<"YES";
    else
        cout<<"NO";
}