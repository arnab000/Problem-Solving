#include<bits/stdc++.h>
using namespace std;

int lcs(string s1, string s2)
{
    int m=s1.size();
    int n=s2.size();
    int lcs[m+1][n+1];
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0 || j==0)
                lcs[i][j]=0;
            else if(s1[i-1]==s2[j-1])
                lcs[i][j]=lcs[i-1][j-1]+1;
            else
                lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);

        }
    }
    return lcs[m][n];
}






int main()
{

    int test;
    //cin.ignore();
    cin>>test;
    while(test--)
    {
        int dist[500]={0};
        int  dist1[500]={0};
        string s1,s2,s3;
        cin>>s1;
        cin>>s2;
        cin>>s3;
        for(int i=0;i<s1.size();i++)
        {
            dist[int(s1[i])]++;
        }
        for(int i=0;i<s3.size();i++)
        {
            dist[int(s3[i])]++;
        }
          for(int i=0;i<s2.size();i++)
        {
            dist1[int(s2[i])]++;
        }

        if(lcs(s1,s2)==s1.size()){
                int h=0;
        for(int i=0;i<s2.size();i++)
        {
            if(dist[int(s2[i])]<dist1[int(s2[i])]){
                h++;
            }
        }
        if(h>0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;



    }

}
