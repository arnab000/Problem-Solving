#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<pair<int, int>> v;
    map<int, int> m;
    for (int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;

        v.push_back({x, y});
        m[x]++;
        m[y]++;
    }
    int t1 = -1, t2 = -1;
    int sura[n - 1];
    memset(sura, -1, sizeof(sura));

    for (int i = 0; i < v.size(); i++)
    {
        int a, b;
        a = v[i].first;
        b = v[i].second;
        if (m[a] > 2)
        {
            t1 = a;
            break;
        }
        else if (m[b] > 2)
        {
            t2 = b;
            break;
        }
    }
    int temp = 0;
    if (t1 != -1)
    {
        for (int i = 0; i < n - 1; i++)
        {
            int x, y;
            x = v[i].first;
            y = v[i].second;
            if (x == t1 || y == t1)
            {
                sura[i] = temp;
                temp++;
            }
        }
        t1 = 0;
    }
    if (t1 != 0 && t2 != -1)
    {
        for (int i = 0; i < n - 1; i++)
        {
            int a, b;
            a = v[i].first;
            b = v[i].second;
            if (b == t2 || a == t2)
            {
                sura[i] = temp;
                temp++;
            }
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (sura[i] != -1)
        {
            cout << sura[i] << endl;
        }
        else
        {
            cout << temp << endl;
            temp++;
        }
    }
}