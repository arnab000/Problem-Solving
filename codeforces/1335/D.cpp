#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long  test;
    cin>>test;
    while(test--){
      vector<char>sura[10];
      for(long long i=0;i<9;i++)
      {
          for(long long j=0;j<9;j++)
          {
              char s;
              cin>>s;

              if(i==0 && j==0)
              { if(s=='9')
                  {
                      s--;
                      sura[i].push_back(s);
                  }
                  else
                  {
                      s++;
                          sura[i].push_back(s);
                  }
              }
              else  if(i==1 && j==3)
              { if(s=='9')
                  {
                      s--;
                        sura[i].push_back(s);
                  }
                  else
                  {
                      s++;
                          sura[i].push_back(s);
                  }
              }
              else if(i==2 && j==6)
              { if(s=='9')
                  {
                      s--;
                     sura[i].push_back(s);
                  }
                  else
                  {
                      s++;
                         sura[i].push_back(s);
                  }
              }
               else if(i==3 && j==1)
              { if(s=='9')
                  {
                      s--;
                        sura[i].push_back(s);
                  }
                  else
                  {
                      s++;
                         sura[i].push_back(s);
                  }
              }
              else  if(i==4 && j==4)
              { if(s=='9')
                  {
                      s--;
                       sura[i].push_back(s);
                  }
                  else
                  {
                      s++;
                        sura[i].push_back(s);
                  }
              }
             else  if(i==5 && j==7)
              { if(s=='9')
                  {
                      s--;
                      sura[i].push_back(s);
                  }
                  else
                  {
                      s++;
                          sura[i].push_back(s);
                  }
              }
              else if(i==6 && j==2)
              { if(s=='9')
                  {
                      s--;
                       sura[i].push_back(s);
                  }
                  else
                  {
                      s++;
                        sura[i].push_back(s);
                  }
              }
               else if(i==7 && j==5)
              { if(s=='9')
                  {
                      s--;
                       sura[i].push_back(s);
                  }
                  else
                  {
                      s++;
  sura[i].push_back(s);
                  }
              }
              else if(i==8 && j==8)
              { if(s=='9')
                  {
                      s--;
                       sura[i].push_back(s);
                  }
                  else
                  {
                      s++;
                      sura[i].push_back(s);
                  }
              }
              else
                sura[i].push_back(s);
          }
      }
      //cout<<endl;
      for(long long i=0;i<9;i++)
      {
          for(long long j=0;j<9;j++)
          {
              cout<<sura[i][j];
          }
          cout<<endl;
      }
    }
}
