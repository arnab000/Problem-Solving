    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll ans = 1000000000000;
    double temp = 0;
     
    double calculateTemp(ll n, double high, double low)
    {
    	ll l = n / 2.0;
    	ll h = l + 1.0;
    	return (h * high + l * low) / (h + l);
    }
     
     
    ll binarySearch(ll l, ll r, double x, double high, double low, ll prevmid, int count)
    {
    	double nowtemp;
    	while (r > l) {
    		ll mid = l + (r - l) / 2;
    		if (mid % 2 == 0)
    		{
    			mid -= 1;
    		}
    		if (mid == prevmid && count == 0)
    		{
    			//return ans;
    			count++;
    			mid += 2;
    		}
    		if (mid == prevmid && count == 1)
    		{
    			return ans;
    			//mid+=2;
    		}
    		nowtemp = calculateTemp(mid, high, low);
     
    		if (abs(nowtemp - x) < abs(temp - x))
    		{
    			//cout << nowtemp - temp << endl;
    			temp = nowtemp;
    			ans = mid;
    		}
    		if (abs(nowtemp - x) == abs(temp - x))
    		{
    			//cout << nowtemp - temp << endl;
    			temp = nowtemp;
    			ans = min(mid, ans);
    		}
    		if (nowtemp == x)
    		{
    			return ans;
    		}
    		else if (nowtemp > x)
    		{
    			l = mid + 1;
    		}
    		else
    		{
    			r = mid - 1;
    		}
     
    		return binarySearch( l, r, x , high , low, mid, count);
    	}
     
    	return ans ;
    }
     
     
    void solve(ll cs) {
     
    	ll high = 1000000000;
    	double h, l, t;
    	cin >> h >> l >> t;
    	temp = h;
    	ans = 1;
                if(h==t)
        {
            cout<<1<<endl;
            return;
 
        }
        if(t<=(h+l)*1.00/2)
        {
            cout<<2<<endl;
           return;
        }
    	if (abs(h - t) > abs(((h + l) / 2.0)  - t))
    	{
    		ans = 2;
    		temp = (h + l) / 2.0;
    	}
    	ll result = binarySearch(1, high, t, h, l, 0, 0);
        double prev=100000000;
        ll anus;
        for(ll i=result;i<=result+100;i++)
        {
            ll ee=i/2;
            ll bb=i-ee;
            long double pasa=((ee*l)+(bb*h))*1.00/i;
            if(prev>abs(t-pasa))
            {
                prev=abs(t-pasa);
               
              anus=i;
            }

        }
    	cout << anus << endl;
     
    }
     
    int main() {
    	FastIO; ll t; cin >> t;
     
    	for (ll i = 0; i < t; i++) solve(i + 1);
     
    	return 0;
    }