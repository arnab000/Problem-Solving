#include<bits/stdc++.h>
    
using namespace std;
#define ll long long
#define f first
#define s second
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fo(a,b,c) for(int i=a;i<b;i+=c)  
typedef pair<ll , pair<ll, ll> > pi;
int po(int x,int y){
    int res=1;
    while(y){
        if(y&1) res*=x;
        y>>=1;
        x*=x;
    }
    return res;
}   
struct Compare {
    constexpr bool operator()(pi const & a,
                              pi const & b) const noexcept
    { return a.first < b.first || (a.first == b.first && a.second.first > b.second.first); }
 
};
int kutta=0;
const int AS=26;
 int k;
    bool arr[26];
struct TrieNode
{
   TrieNode  *children[AS];
   bool endofword;

};

TrieNode *getnode()
{
    TrieNode *pnode=new TrieNode;
    pnode->endofword=false;
    for(int i=0;i<AS;i++)
    pnode->children[i]=NULL;

    return pnode;
}
void insert(TrieNode *root, string sura,int start)
{
    TrieNode *pcrawl=root;
    int bad=0;
   // cout<<sura<<endl;
    for(int i=start;i<sura.size();i++)
    {
        int index=sura[i]-'a';
        if(!arr[index])
        bad++;
        if(bad>k)
        break;
        if(!pcrawl->children[index])
        {
            
            pcrawl->children[index]=getnode();
          kutta++;

        }
        pcrawl=pcrawl->children[index];
    }
    pcrawl->endofword=true;
  
    
}
int main()
{
    Fast
    string s,t;
   
    cin>>s;
    cin>>t;
    for(ll i=0;i<26;i++)
    {
        arr[i]=t[i]-'0';
    }
    cin>>k;
    vector<string>sura;
     TrieNode *root=getnode();
    for(int i=0;i<s.size();i++){
       insert(root,s,i);
    }
cout<<kutta<<'\n';

 
}
 
 
 
   
      