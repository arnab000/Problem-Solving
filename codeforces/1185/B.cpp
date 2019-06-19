#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  while(n--){
        int i,j;
    string sura,str;
    set<char>baal;
    set<char>dada;
    bool flag=false;
    cin>>sura;
    cin>>str;

    if(sura[0]!=str[0])
    {
       // cout<<"NO"<<endl;
        cout<<"NO"<<endl;
        continue;
    }
    if(  sura.size()> str.size())
    {

        cout<<"NO"<<endl;
        continue;
    }

        j=1;
    for(i=1;i<sura.size();)
    {

        if(sura[i]==str[j])
            {i++;
            j++;}
        else{
        while(str[j]!=sura[i])
        {

            if(str[j]==sura[i-1])
                j++;
                else if(str[j]==sura[i])
                    break;
            else
            {

                flag=true;
               // cout<<"NO"<<endl;
                break;
            }


        }


        }
         if(flag)
        {
            break;
        }


    }
    for(;j<str.size();j++)
    {
        baal.insert(str[j]);
    }
    if((baal.size()==1 || baal.size()==0)&& str[str.size()-1]==sura[sura.size()-1] && !flag)
    {
        cout<<"YES"<<endl;

    }
    else {
        cout<<"NO"<<endl;
    }




  }


}
