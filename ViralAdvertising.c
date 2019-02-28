#include<stdio.h>
  int main()
      {
     int n;
      int i;
      int m=2;
      int sum=2;
      scanf("%d",&n);
      for(i=1;i<n;i++)
          {
          m*=1.50;
          sum+=m;
          }
     printf("%d",sum);
      return(0);
      }



