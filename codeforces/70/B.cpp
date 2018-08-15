
#include<bits/stdc++.h>

using namespace std;
int main()
{

   string s;
   int i,j=0,k=0,n,x=0,l=0,m=0,sum=0;
   cin>>n;
    getchar();
   getline(cin,s);
   vector<int>v ;


   for(i=l;i<s.size();i++)
   {

       m++;

       if(s[i]=='.'||s[i]=='!'||s[i]=='?')
        {
k++;

        if(m>n)
            {
                cout<<"Impossible"<<endl;
                return 0;}


v.push_back(m);

m=0;
i++;
        }



   }
   sum=v[0];

   for(i=1;i<v.size();i++)
   {

       sum+=v[i]+1;

       if(sum>n)
       {

          x++;
sum=v[i];

       }


   }


   if(sum!=0 && sum<=n)
    x++;


    cout<<x<<endl;


}
