//Implementation for Dijkstra's SSSP(Single source shortest path) algorithm
//This is an optimized algorithm running in O(E*log(V))

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,n,x,y;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        cout<<y+(x-1)*9<<endl;
    }
}
