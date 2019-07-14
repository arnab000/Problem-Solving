#include<bits/stdc++.h>
using namespace std;



int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int m, n;
        cin >> n >> m;
        char sura[n+10][m+10];
        int row = 0, clm = 0, c1 = 0, r1 = 0, res;
        for(int i = 0; i < n; i++)
        {
            int cnt = 0;
            for(int j = 0; j < m; j++)
            {
                cin >> sura[i][j];
                if(sura[i][j] == '*')
                    cnt++;
            }
            if(row < cnt)
            {
                row = cnt;
                r1 = i;
            }
        }
        vector<int> r, c;
        for(int i = 0; i < n; i++)
        {
            int cnt = 0;
            for(int j = 0; j < m; j++)
            {
                if(sura[i][j] == '*')
                    cnt++;
            }
            if(row == cnt)
            {
                r.push_back(i);
            }
        }
        for(int j = 0; j < m; j++)
        {
            int cnt = 0;
            for(int i = 0; i < n; i++)
            {
                if(sura[i][j] == '*')
                    cnt++;
            }
            if(clm < cnt)
            {
                clm = cnt;
                c1 = j;
            }
        }
        for(int j = 0; j < m; j++)
        {
            int cnt = 0;
            for(int i = 0; i < n; i++)
            {
                if(sura[i][j] == '*')
                    cnt++;
            }
            if(clm == cnt)
            {
                c.push_back(j);
            }
        }

        res = n + m - row - clm;
        bool flag = false;
        for(int i = 0; i < r.size(); i++)
        {
            for(int j = 0; j < c.size(); j++)
            {
                if(sura[r[i]][c[j]] == '.')
                {
                    res--;
                    flag = true;
                    break;
                }
            }
            if(flag)
                break;
        }
        cout << res << endl;
    }
    return 0;
}

