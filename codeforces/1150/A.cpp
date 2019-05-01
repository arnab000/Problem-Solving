#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int  main()
{
    int n,m,r;
    cin>>n>>m>>r;
    vector<int>s,b;
    s.resize(n);
    b.resize(m);
    for(int &a : s) cin>>a;
    for(int &a : b) cin>>a;
    sort(s.begin(),s.end());
    sort(b.begin(),b.end(),greater<int>());
    int ms=r/s[0];
    int rr=r%s[0];
    int mb=ms*b[0]+rr;
    cout<<max(mb,r)<<endl;
}