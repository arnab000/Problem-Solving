#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>sura= {4, 8, 15, 16, 23, 42};
    vector<int>dada;
    int i,l;
    bool flag ;
    for(i=0;i<4;i++)
    {
        cout<<"? "<<i+1<<" "<<i+2<<endl;
        cout.flush();
        cin>>l;
        dada.push_back(l);

    }
    do{
             flag =false;
        for(i=0;i<4;i++)
        {
           
            if(sura[i]*sura[i+1]!=dada[i])
            {
                flag=true;
                break;
            }
        }
             if(!flag)
                break;
    } while(next_permutation(sura.begin(),sura.end()));
    cout<<"! ";
    for(i=0;i<sura.size();i++)
    {
        cout<<sura[i]<<" ";
    }

    cout<<endl;
     cout.flush();
}
