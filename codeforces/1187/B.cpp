#include<bits/stdc++.h>
using namespace std;

int main(){
int t,i;
cin>>t;
vector<int>sura[100000];
string s;
cin>>s;
for(i=0;i<s.size();i++)
{
   // cout<<int(s[i])<<endl;
    sura[int(s[i])].push_back(i+1);
}

int n;
cin>>n;
while(n--){
    string s1;
    int arr[500]={0};
    int y=-1,i;
    cin>>s1;
    for(i=0;i<s1.size();i++)
    {
        arr[int(s1[i])]++;
       // cout<<sura[int(s1[i])][arr[int(s1[i])]-1]<<endl;
       y=max(y,sura[int(s1[i])][arr[int(s1[i])]-1]) ;

    }
    cout<<y<<endl;

}

}
