#include <stdio.h>
#include<iostream>
#include <algorithm>
#include<string.h>
#include<cmath>
#pragma warning(disable:4996)
#define mod 1000000007
#define ll unsigned long long
const int N = 100005;
using namespace std;
int pr[N];
int main()
{
	int t, n,k;
	cin >> t;
	while (t--)
	{
		memset(pr, 0, sizeof(pr));
		int id,a, b,tem,flag;
		cin >> n ;
		for (int i = 1; i <= n; i++)
		{
			cin >> k;
			flag = 0;
			while(k--)
			{
				cin >> tem;
				if (!flag&&!pr[tem])
				{
					pr[tem] = 1;
					flag = 1;
				}
			}
			if (!flag)
			{
				id = i;
			}
		}
		int f = 0;
		for (int i = 1; i <= n; i++)
		{
			if (!pr[i])
			{
				b = i;
				f = 1;
				break;
			}
		}
		if (f)
		{
			cout << "IMPROVE" << endl;
			cout << id << " " << b << endl;
		}
		else
			cout << "OPTIMAL" << endl;
	}
	
}

