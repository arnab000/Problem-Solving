#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        set<int>sura;
        vector<int>baal;
        for(int i=0;i<n;i++)
        {
            int k;
            cin>>k;
            baal.push_back(k);


        }
        bool l=false,r=false,hbe=true;
            for(int i=0;i<n;i++)
        {
            int k;
            cin>>k;
        if(baal[i]!=k){
            sura.insert(k-baal[i]);
            l=true;
        }
        if(l==true && baal[i]==k)
        {
            r=true;
        }
        if(l && r &&baal[i]!=k)
        {
            hbe=false;

        }



        }
        set<int>::iterator it;
        it=sura.begin();
        if(hbe && sura.size()==1 && *it>0 )
        {
            cout<<"YES"<<endl;
        }
        else if(sura.empty())
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;



    }
}
