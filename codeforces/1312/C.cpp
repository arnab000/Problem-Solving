#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
ll num[35];
bool vis[105];
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        memset(vis,0,sizeof(vis));
        ll n,k;
        cin >> n >> k;
        for(int i=0;i<n;i++)
            scanf("%lld",&num[i]);
        int f=1;
        for(int i=0;i<n && f;i++)
        {
            ll t=1,cnt=0;
            while(t<num[i]){t*=k;cnt++;}
            for(int j=cnt;j>=0;j--,t/=k)
            {
                if(t<=num[i])
                {
                    num[i]-=t;
                    if(!vis[j])
                    {
                        vis[j]=1;
                    }
                    else
                    {
                        f=0;
                        break;
                    }
                }
            }
            if(num[i])
                f=0;
        }
        if(f)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}