#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l;
    cin>>l;
    while(l--){
        int n,m,sum=0;
        cin>>n>>m;
        vector<int>sura;

        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            sum+=x;
            sura.push_back(x);
        }
        if(m<n || n==2){
            cout<<-1<<endl;
            continue;
        }

       cout<<2*sum<<endl;
       for(int i=1;i<n;i++)
       {

           cout<<i<<" "<<i+1<<endl;

       }
       cout<<1<<" "<<n<<endl;
    }
    return 0;
}
