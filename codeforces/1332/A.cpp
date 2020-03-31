#include <bits/stdc++.h>
using namespace std;
 
int main()
{
   
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c, d;
          long long x, y, x1, y1, x2, y2;
        
        
        cin >> a >> b >> c >> d;
         cin >> x >> y >> x1 >> y1 >> x2 >> y2;
        bool ans = true;
 
        if (x2 - x1 == 0 && a + b != 0)
            ans = false;
        if (y2 - y1 == 0 && d + c != 0)
            ans = false;
 
        x = x - a + b;
        y = y - c + d;
 
        if (x < x1 || x > x2)
            ans = false;
        if (y < y1 || y > y2)
            ans = false;
 
        if (!ans)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}