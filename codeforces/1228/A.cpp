#include<bits/stdc++.h>
using namespace std;
int isdisdi(int n)
{
    set<int>s;
    int ans=0;
    while(n)
    {
       s.insert(n%10) ;
       ans++;
       n/=10;

    }

    if(s.size()==ans)
        return 1;
    else
        return 0;
}

int main()
{
    int x,y;
    cin>>x>>y;
    for(int i=x;i<=y;i++)
    {
        int p=isdisdi(i);
        if(p==1){
            cout<<i<<endl;
            return 0;
        }


    }
    cout<<-1<<endl;

}
