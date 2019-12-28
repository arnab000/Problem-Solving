#include <bits/stdc++.h>
using namespace std;
int n,b[200005],a[200005],dem,c[200005],kt[200005],m,pre;
int main()
{
   // freopen("a.inp","r",stdin);
   // freopen("a.out","w",stdout);
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
        kt[a[i]]=1;
    }
    for (int i=1;i<=n;i++)
    {
        if (kt[i]==0)
        {
            dem++;
            b[dem]=i;
        }
    }
    m=dem;
    dem=0;
    for (int i=1;i<=n;i++)
    {
        if (a[i]!=0);
        else {
            dem++;
        if (b[dem]==i && m!=dem)
        {
            m++;
            b[m]=i;
            dem++;
        }
        else if (m==dem && b[dem]==i)
        {
          //  cout<<a[2]<<endl;
            a[i]=a[pre];
            a[pre]=b[dem];
 
            break;
        }
        pre=i;
        //cout<<b[dem]<<endl;
                a[i]=b[dem];
        }
    }
    for (int i=1;i<=n;i++) cout<<a[i]<<' ';
}