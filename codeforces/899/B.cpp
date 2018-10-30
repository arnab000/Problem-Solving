

#include <bits/stdc++.h>
using namespace std;

int main ()
{
  string str ("31 28 31 30 31 30 31 31 30 31 30 31 31 28 31 30 31 30 31 31 30 31 30 31 31 28 31 30 31 30 31 31 30 31 30 31");
  string str2 ("31 29 31 30 31 30 31 31 30 31 30 31 31 28 31 30 31 30 31 31 30 31 30 31 31 28 31 30 31 30 31 31 30 31 30 31");
  string str3 ("31 28 31 30 31 30 31 31 30 31 30 31 31 29 31 30 31 30 31 31 30 31 30 31 31 28 31 30 31 30 31 31 30 31 30 31");
  string str4 ("31 28 31 30 31 30 31 31 30 31 30 31 31 28 31 30 31 30 31 31 30 31 30 31 31 29 31 30 31 30 31 31 30 31 30 31");
  string sura;
  int n;
  cin>>n;
  getchar();
  getline(cin,sura);


size_t found = str.find(sura);

size_t found2 = str2.find(sura);

size_t found3 = str3.find(sura);
size_t found4 = str4.find(sura);

  if (found==string::npos && found2==string::npos && found3==string::npos && found4==string::npos)
   cout<<"No"<<endl;
   else cout<<"Yes"<<endl;


  return 0;
}
