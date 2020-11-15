#include <bits/stdc++.h> 
using namespace std; 
  

#define ll long long
ll arr[2*100005];
void updateBIT(  ll index, ll val) 
{ 
    // index in BITree[] is 1 more than the index in arr[] 
    index = index + 1; 
  
    // Traverse all ancestors and add 'val' 
    while (index <= 200005) 
    { 
        // Add 'val' to current node of BI Tree 
        arr[index] += val; 
  
        // Update index to that of parent in update View 
        index += index & (-index); 
    } 
} 
ll getSum( ll index) 
{ 
    ll sum = 0; // Iniialize result 
  
    // index in BITree[] is 1 more than the index in arr[] 
    index = index + 1; 
  
    // Traverse ancestors of BITree[index] 
    while (index>0) 
    { 
        // Add current element of BITree to sum 
        sum += arr[index]; 
  
        // Move index to parent node in getSum View 
        index -= index & (-index); 
    } 
    return sum; 
} 

void update( ll l, ll r,  ll val) 
{ 
    // Increase value at 'l' by 'val' 
    updateBIT(  l, val); 
  
    // Decrease value at 'r+1' by 'val' 
    updateBIT( r+1, -val); 
} 

int main() 
{ 
   
    ll n,k;
    cin>>n>>k;
    for(ll i=0;i<n;i++)
    {
        ll l,r,w;
      
        cin>>l>>r>>w;
        l++;
      update(l,r,w);
    }
    bool hbe=true;
     for(ll i=1;i<=200005;i++)
    {
        ll ans=getSum(i);
      
        if(ans>k)
        {
            hbe=false;
            break;
        }

    }
    if(hbe)
    cout<<"Yes"<<endl;
    else
    {
        cout<<"No"<<endl;
    }
    

  
} 