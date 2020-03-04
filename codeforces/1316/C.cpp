#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,p,i,x,y;
    scanf("%lld %lld %lld",&n,&m,&p);
    long long a[n],b[m];
    for(i=0; i<n; i++) scanf("%lld",a+i);
    for(i=0; i<m; i++) scanf("%lld",b+i);
    for(i=0; i<n; i++){
        if(a[i]%p!=0){
            x=i;
            break;
        }
    }
    for(i=0; i<m; i++){
        if(b[i]%p!=0){
            y=i;
            break;
        }
    }
    printf("%lld\n",x+y);
    return 0;
}