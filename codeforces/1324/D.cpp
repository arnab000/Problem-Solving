#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	long long int ssss = 0;
	cin >> n;
	int aaarr[n], bbbrr[n+1], cccrr[n+1];
	for(int i=0; i<n; i++) scanf("%d",&aaarr[i]);
	for(int i=0; i<n; i++){
	    scanf("%d",&bbbrr[i]);
	    cccrr[i] = aaarr[i]-bbbrr[i];
	}
	sort(cccrr, cccrr+n, greater<int>());
	map < int, int> bal;
	for(int i=0; i<n; i++) bal[cccrr[i]] = i;
	for(int i=0; i<n-1; i++){
	    if(cccrr[i] > 0){
	       auto it = bal.lower_bound(-1*(cccrr[i]-1));
	       if((*it).second > i) ssss += (*it).second - i;
	    }
	}
	cout << ssss << endl;
	return 0;
}