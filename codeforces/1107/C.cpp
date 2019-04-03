#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  a,b,c,i,j,k,l,sum=0;
    string s;
    vector<long long>sura;

   cin>>b>>a;
    for(i=0;i<b;i++)
    {
        cin>>k;
        sura.push_back(k);
    }
    getchar();
    getline(cin,s);
    for(i=0;i<s.size();i++)
    {
        l=1;
        j=i;
        while(s[i]==s[i+1])
        {

            l++;
            i++;


        }

        if(l>a)
            sort(sura.begin()+j,sura.end()-(b-i-1),greater<long long>());
    }

//    for()
     for(i=0;i<s.size();i++)
    {
        l=1;
        while(s[i]==s[i+1])
        {

            //l++;
            //i++;
            if(l<=a)
            {
               // cout<<sura[i]<<endl;
                sum+=sura[i];
            }
           l++;
           i++;

        }
        if(l<=a)
        sum+=sura[i];

    }
cout<<sum<<endl;





}
