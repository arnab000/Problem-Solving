#include<bits/stdc++.h>
      // for vector

using namespace std;

int main ()
{
  long long n,m,a,ans=0,i,j;
  set<int>sura;
  vector<int>cube1;
  vector<int>cube2;
  vector<int>cube3;
   vector<int>dada;
  cin>>n;
  if(n==1)
  {
    for(i=0;i<6;i++)
  {
      cin>>m;
      cube1.push_back(m);
      if(m!=0)
        sura.insert(m);
  }
  }
  if(n==2)
  {
  for(i=0;i<6;i++)
  {
      cin>>m;
      cube1.push_back(m);
      if(m!=0)
        sura.insert(m);
  }
  for(i=0;i<6;i++)
  {
      cin>>m;
      cube2.push_back(m);
      if(m!=0)
        sura.insert(m);

  }
  for(i=0;i<6;i++)
  {
         int p=cube1[i]*10;
         int q=cube2[i]*10;


      for(j=0;j<6;j++)
      {
          if(p+cube2[j]!=0)
          sura.insert(p+cube2[j]);
           if(q+cube1[j]!=0)
          sura.insert(q+cube1[j]);


      }

  }
  }
  if(n==3){
  for(i=0;i<6;i++)
  {
      cin>>m;
      cube1.push_back(m);
      if(m!=0)
        sura.insert(m);
  }
     for(i=0;i<6;i++)
  {
      cin>>m;
      cube2.push_back(m);
        if(m!=0)
      sura.insert(m);
  }
     for(i=0;i<6;i++)
  {
      cin>>m;
      cube3.push_back(m);
        if(m!=0)
      sura.insert(m);
  }
  for(i=0;i<6;i++)
  {
         int x=cube1[i]*10;
         int y=cube2[i]*10;
         int z=cube3[i]*10;

      for(j=0;j<6;j++)
      {
          if(x+cube2[j]!=0)
          sura.insert(x+cube2[j]);
           if(x+cube3[j]!=0)
          sura.insert(x+cube3[j]);
           if(y+cube1[j]!=0)
          sura.insert(y+cube1[j]);
           if(y+cube3[j]!=0)
          sura.insert(y+cube3[j]);
           if(z+cube1[j]!=0)
          sura.insert(z+cube1[j]);
           if(z+cube2[j]!=0)
          sura.insert(z+cube2[j]);

      }
  }


  }
     set <int > :: iterator itr;

    for (itr = sura.begin(); itr != sura.end(); ++itr)
    {
    dada.push_back(*itr);

    }
    for(i=0;i<dada.size();i++)
    {
        if(dada[i]==i+1)
            {
              ans++;
            }
    }
    cout<<ans<<endl;




}
