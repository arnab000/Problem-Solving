#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    string sura,s1,s2,s3,s4,s5,s6;
    vector<long>v;

    s1="RGB";
    s2="RBG";
    s3="BGR";
    s4="BRG";
    s5="GRB";
    s6="GBR";
    long c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,i;
    cin>>n;
    getchar();
    cin>>sura;
   long j=0;
    for(i=0;i<sura.size();i++)
    {


        if(sura[i]!=s1[j])
            c1++;
        if(sura[i]!=s2[j])
            c2++;
        if(sura[i]!=s3[j])
            c3++;
        if(sura[i]!=s4[j])
            c4++;
        if(sura[i]!=s5[j])
            c5++;
        if(sura[i]!=s6[j])
            c6++;

         j++;
          if(j==3)
            j=0;


    }
    v.push_back(c1);
    v.push_back(c2);
    v.push_back(c3);
    v.push_back(c4);
    v.push_back(c5);
    v.push_back(c6);
    sort(v.begin(),v.end());
    cout<<v[0]<<endl;
    if(v[0]==c1)
    {
        j=0;
        for(i=0;i<n;i++)
        {
            cout<<s1[j];
            j++;
            if(j==3)
                j=0;
        }

    }
    else if(v[0]==c2)
    {
        j=0;
        for(i=0;i<n;i++)
        {
            cout<<s2[j];
            j++;
            if(j==3)
                j=0;
        }

    }
    else if(v[0]==c3)
    {
        j=0;
        for(i=0;i<n;i++)
        {
            cout<<s3[j];
            j++;
            if(j==3)
                j=0;
        }

    }
    else if(v[0]==c4)
    {
        j=0;
        for(i=0;i<n;i++)
        {
            cout<<s4[j];
            j++;
            if(j==3)
                j=0;
        }

    }
    else if(v[0]==c5)
    {
        j=0;
        for(i=0;i<n;i++)
        {
            cout<<s5[j];
            j++;
            if(j==3)
                j=0;
        }

    }
    else if(v[0]==c6)
    {
        j=0;
        for(i=0;i<n;i++)
        {
            cout<<s6[j];
            j++;
            if(j==3)
                j=0;
        }

    }



}
