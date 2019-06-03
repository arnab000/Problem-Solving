#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>vec;
    int a;
    bool ev=false,od=false;
    for(int i=0;i<n;i++){
        cin>>a;
        vec.push_back(a);
        if(a%2==0)
            ev=true;
        else
            od=true;
    }
    if(ev && od){
        sort(vec.begin(),vec.end());
        for(int i=0;i<n;i++)
            cout<<vec[i]<<" ";
        cout<<endl;
        return 0;
    }
    for(int i=0;i<n;i++)
        cout<<vec[i]<<" ";
    cout<<endl;
}
