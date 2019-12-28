#include <bits/stdc++.h>
#define inl(x) scanf("%lld",&x)
#define in(x) scanf("%d",&x)
#define ll long long
#define mp(x,y) make_pair(x,y)
#define mxx 100000000000000000
#define M 200005
#define pi 2*acos(0.0)
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
//#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
using namespace std;
 
 
bool dise[M],paise[M];
int solution[M];
std::vector<int> dibe,pabe;
 
void sort()
{
    for(int i=0;i<dibe.size();i++)
    {
        if(dibe[i]==pabe[i])
        {
            if(i==dibe.size()-1)
            {
                swap(pabe[i],pabe[i-1]);
            }
            else
                swap(pabe[i],pabe[i+1]);
        }
    }
}
 
 
int main()
{
 
    int n,x;
    cin >> n ;
    for(int i=1;i<=n;i++)
    {
        in(x);
        if(x)
        {
            dise[i] = 1;
            paise[x] = 1;
            solution[i] = x;
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(!dise[i])
            dibe.push_back(i);
        
        if(!paise[i])
            pabe.push_back(i);
    }
    sort();
    for(int i=0;i<dibe.size();i++)
    {
        //if(dibe[i]==pabe[i])
 
        solution[dibe[i]] = pabe[i];
    }
    for(int i=1;i<=n;i++)
        printf("%d%c",solution[i] , " \n"[i==n] );
    return 0;
}