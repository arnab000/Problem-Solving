#include <bits/stdc++.h>
using namespace std;

long long product(long long x)
{
    long long dada= 1;
    while (x) {
        dada*= (x % 10);
        x /= 10;
    }
    return dada;
}

int main()
{
    long long num;
    cin>>num;

    string sura = to_string(num);
    long long ans = num;
    for (int i = 0; i < sura.size(); i++) {
        if (sura[i] == '0')
            continue;
        string cu = sura;
        cu[i] = ((cu[i] - '0') - 1) + '0';
        for (int j = i + 1; j < cu.size(); j++)
            cu[j] = '9';
        long long b = 0;
        for (auto c : cu)
            b = b * 10 + (c - '0');
        if (b >= 0 && product(ans) < product(b))
            ans = b;
    }
    long long baal= product(ans);
    cout<<baal<<endl;
    return 0;
}
