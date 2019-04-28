#include<bits/stdc++.h>
using namespace std;

int main(){
int i,j,k,l=0,n;
string sura;
char a;
cin>>n;
getchar();
vector<char>s;
getline(cin,sura);
for(i=1;i<10;i++)
{
    cin>>a;
    s.push_back(a);


}
//cout<<sura[0];
for(i=0;i<n;i++)
{

    if(sura[i]<s[(sura[i]-'0')-1])
    {
        //cout<<s[(sura[i]-'0')-1];
        while(i<n && sura[i]<=s[(sura[i]-'0')-1])
             {
                 sura[i]=s[(sura[i]-'0')-1];
                // cout<<s[(sura[i]-'0')-1];
                 i++;
             }

    break;


    }

//cout<<endl;
  //  cout<<x<<endl;



}
cout<<sura<<endl;


}
