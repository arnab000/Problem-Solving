#include <bits/stdc++.h>
using namespace std;

int main()
{
long long H,di;
int n;
cin >> H >> n;
vector<long long> a;
long long sum = 0;
long long sura = 0;
long long h = H;
for (int i = 0; i < n; i++) {
    cin >> di;
    a.push_back(di);
    sum -= a[i];
   // cout<<sum<<endl;
    h += a[i];
    if (h <= 0) {
        cout << i + 1 << endl;
        return 0;
    }
    sura = max(sura, sum);
    //cout<<sura<<endl;
}
//cout<<sura<<endl;
if (sum <= 0) {
    cout << -1 << endl;
    return 0;
}

long long whole = (H - sura) / sum;
//cout<<whole<<endl;
H -= whole * sum;
long long result = whole * n;

for (int i = 0;; i++) {

    H += a[i%n];
    result++;
    if (H <= 0) {
        cout << result << endl;
        break;
    }
}



}

