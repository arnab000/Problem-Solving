#include <bits/stdc++.h>
using namespace std;

void computeLPSArray(long long* pat, long long M, long long* lps);


int  KMPSearch(long long* pat, long long* txt,long long n,long long m)
{

    long long  M = m-1;
    long long N = n-1;
long long ans=0;

    long long lps[M];


    computeLPSArray(pat, M, lps);

    long long i = 0; // index for txt[]
    long long j = 0; // index for pat[]
    while (i < N) {
        if (pat[j] == txt[i]) {
            j++;
            i++;
        }

        if (j == M) {
           ans++;
            j = lps[j - 1];
        }

        // mismatch after j matches
        else if (i < N && pat[j] != txt[i]) {

            if (j != 0)
                j = lps[j - 1];
            else
                i = i + 1;
        }
    }
    return ans;
}

void computeLPSArray(long long* pat, long long M, long long* lps)
{

    long long len = 0;

    lps[0] = 0;


    long long i = 1;
    while (i < M) {
        if (pat[i] == pat[len]) {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {

            if (len != 0) {
                len = lps[len - 1];


            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}


int main()
{
    long long n,m;
cin>>n>>m;
long long sura[n+1];
long long pi[m+1];
long long ans[m];
long long baal[n];
for(long long i=0;i<n;i++)
{ cin>>sura[i];
}

for(long long i=0;i<m;i++)
{ cin>>pi[i];
}
if(m==1)
{
    cout<<n<<endl;
    return 0;
}
if(n<m)
{
    cout<<0<<endl;
    return 0;
}
for(long long i=1;i<m;i++)
{
    ans[i-1]=(pi[i]-pi[i-1]);
}
for(long long i=1;i<n;i++)
{
    baal[i-1]=(sura[i]-sura[i-1]);
}
cout<< KMPSearch(ans,baal,n,m)<<endl;
}