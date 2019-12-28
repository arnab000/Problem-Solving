#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
void bst(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}
int arr[(int)2e5 + 100];
bool pol[(int)2e5 + 100];
int ans[(int)2e5 + 100];
bool pod[(int)2e5 + 100];
int main() {
	bst();
	int n;
	cin >> n;
	for(int i = 1; i <= n;i++){
	cin >> arr[i];
	if(arr[i] != 0){
	pol[arr[i]] = 1;
	pod[i] = 1;
	}
	}
	int cnt = 0;
	for(int i = 1;i <= n;i++){
		if(pol[i] == 0 && pod[i] == 1)ans[cnt] = i,cnt++;
	}
	int k = 0;
	for(int i = 1;i <= n;i++){
	if(pod[i] == 0 && pol[i] == 0 && k != cnt ){
		arr[i] = ans[k];
		k++;
		pod[i] = 1;
		pol[arr[i]] = 1;
	}
}
cnt = 0;
	for(int i = 1;i <= n;i++){
		if(pol[i] == 0)ans[cnt] = i,cnt++;
	}
k = 0;
for(int i = 1;i <= n;i++){
	if(arr[i] == 0){
		if(pod[ans[k + 1]] == 0 && cnt - k == 2)swap(ans[k], ans[k + 1]);
		if(i == ans[k])swap(ans[k],ans[k + 1]);
		arr[i] = ans[k];
		k++;
		pol[arr[i]] = 1;
		pod[i] = 1;
	}
}
for(int i = 1;i <= n;i++){
	cout<<arr[i]<<" ";
}
	return 0;
}