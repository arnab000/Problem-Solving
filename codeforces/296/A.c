
#include<stdio.h>
#include<string.h>

int main()

 {
    int ch[101], temp,n,l=0,k=0,i=0,dis,baal;
    scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&ch[i]);

  }
    int x,  j;
    i=0;

while(1){x=0;
        for (j = i+1; j < n ; j++){

            if (ch[0]==ch[j])
              {
                x++;

              }


            if(l<x)

                l=x;

            }

            k++;
            temp=ch[k];
            ch[k]=ch[0];
            ch[0]=temp;
            if(n==k)
                break;



        }
        dis=n-(l+1);
        if(n%2==0)
            baal=n;
        else baal=n-1;
        if(dis>=(n/2)|| n==0)
            printf("YES");
        else printf("NO");
    }

