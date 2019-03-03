#include<bits/stdc++.h>
using namespace std;

int main()
{

    int arr[102]={0},brr[102]={0},crr[102]={0};
    int a,b,c,d=0;
    scanf("%d %d %d",&a,&b,&c);
    for(int i=1; i<= a*2; i++){
        if(i <= a)
            scanf("%d",&arr[i]);
        else{
            int x;
            scanf("%d",&x);
            crr[i-a]=x;
            if(brr[x] < arr[i-a])
                brr[x]=arr[i-a];
        }
    }
     for(int i=0; i < c; i++){
        int x;
        scanf("%d",&x);
        if(brr[crr[x]] > arr[x])
            d++;
     }
     printf("%d\n",d);
}