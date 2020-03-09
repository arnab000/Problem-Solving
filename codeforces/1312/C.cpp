#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		ll n, k;
		cin>>n>>k;
		vector<ll> arr;
		for(int i = 0; i < n; i++){
			ll a;
			cin>>a;
			arr.push_back(a);
		}
		vector<ll> pre;
		ll at = 1;
		pre.push_back(at);
		for(int i = 1; i <= 64;i++){
			at *= k;
			if(at < 0)
				break;
			pre.push_back(at);
		}
		sort(pre.begin(),pre.end());
		sort(arr.begin(),arr.end());
		bool okay = true;
		bool used[1000];
		memset(used,false,sizeof(used));
		for(int i = 0; i < n; i++){
				bool ok = true;
				while(arr[i] > 0){
					ll pos = upper_bound(pre.begin(), pre.end(), arr[i]) - pre.begin();
					ll value = pre[pos];
					value /= k;
					pos--;
					//cout<<arr[i]<<" ";
					if(pos < 0)
					{
						pos = 0;
						value = 1;
					}
					if(used[pos])
					{
						ok = false;
						break;
					}
					else
					{
						arr[i] -= pre[pos];
						used[pos] = true;
					}
				}
				if(!ok)
				{
					okay = false;
					break;
				}
		}
		
		if(okay)
			puts("YES");
		else
			puts("NO");
	}
	return 0;
}