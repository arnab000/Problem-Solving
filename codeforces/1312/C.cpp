#include<bits/stdc++.h>
using namespace std;
 
long long int intlog(long long base, long long x) {
    return (long long int)(log(x) / log(base));
}
 
 
 
int main()
{
	int T;
	cin>>T;
	
	while(T--)
	{
		int n,k;
		cin>>n>>k;
		int i;
		vector<long long int> arr;
		
		for(i=0;i<n;i++)
		{
			long long int x;
			cin>>x;
			arr.push_back(x);
		}
		
		int flag[100];
		for(i=0;i<100;i++){
			flag[i] = 0;
		}
		int flag1 = 0;
		for(i=0;i<n;i++){
			if(arr[i]!=0){
				long long int x = log(arr[i])/log(k)+1;
//				cout<<"x: "<<x<<"\n";
				for(int j=x;j>=0;j--){
					if(flag[j] == 0 && (long long int)pow(k,j)<=arr[i]){
//						cout<<(long long int)pow(k,j)<<" ";
						arr[i] = arr[i]-(long long int)pow(k,j);
						flag[j] = 1;
					}
				}
//				cout<<"\n";
				if(arr[i] != 0){
					flag1 = 1;
					break;
				}
			}
			
		}
		if(flag1==0){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
}