#include <iostream>
#include <queue>
 
using namespace std;
/*2 1 * * * *
1 2 * * * *
 
 
5
5 0 0 2 4
0 4 0 5 1
*/
int main()
{
    int n,i,j;
    cin>>n;
    int a[n+1]= {0},b[n+1]= {0};
 
    queue <int> k;
    for (i=1; i<=n; i++)
    {
        cin>>a[i];
        b[a[i]]=i;
    }
    for (i=1; i<=n; i++)
    {
        if (b[i]==0)
           {
                k.push(i);
   //     cout<<i<<" ";
    }}
  /*  cout<<endl;
    for (i=1; i<=n; i++)
        cout<<a[i]<<' ';
    cout<<endl;
    for (i=1; i<=n; i++)
        cout<<b[i]<<' ';
    cout<<endl;
5
5 0 0 2 4
0 4 0 5 1
1 3
*/
for (i=1;i<=n;i++){
 
    if(a[i]+b[i]==0) {
 
         if (k.front()==i)
            {
                k.push(k.front());
                k.pop();
 
            }
            a[i]=k.front();
            k.pop();
            b[a[i]]=i;
 
    }
}
    for (i=1; i<=n; i++)
    {
 
        if (a[i])
            cout<<a[i]<<" ";
        else
        {
          /*  if (k.front()==i)
            {
                k.push(k.front());
                k.pop();
 
            }*/
            cout<<k.front()<<" ";
            k.pop();
 
 
        }
 
    }
    return 0;
}