#include<stdio.h>

int main()
{
  int i,j,a[101][3],n,m,temp=0;
  scanf("%d%d",&n,&m);
  for(i=0;i<n;i++)
  {
      for(j=0;j<2;j++)
      {
          scanf("%d",&a[i][j]);
      }
  }
  for(i=1;i<n;i++)
  {
    if(a[0][0]<=a[i][0] && a[i][0]<=a[0][1] )
        {
            if(a[i][1]>a[0][1])
            {
                temp=a[0][1];
                a[0][1]=a[i][1];

            }
            temp=0;
        }

  }

  if(a[0][1]>=m && a[0][0]==0)
    printf("YES");
  else printf("NO");

}