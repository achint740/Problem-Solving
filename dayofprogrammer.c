#include<stdio.h>
  int main()
      {
     int year,m,i,da;
int sum[12]={31,59,90,120,151,181,212,243,273,304,334,365};
      scanf("%d",&year);
          for(i=0;i<12;i++)
              {
              if((sum[i]-256)>0)
                  break;
              }
          m=i+1;
      if(year<1918)
          {
          if(year%4!=0)
             da=256-sum[i-1];
          else
              da=255-sum[i-1];
      }
      if(year>=1918)
          {
          if((year%4==0 && year%100!=0)|| year%400==0)
              da=255-sum[i-1];
          else
              da=256-sum[i-1];
          }
      if(year==1918)
          da+=13;
      if(m<10)
          {
          if(da<10)
 printf("0%d.0%d.%d",da,m,year);
          else
printf("%d.0%d.%d",da,m,year);
          }
     if(m>10)
         {
         if(da<10)         printf("0%d.%d.%d",da,m,year);
         else
printf("%d.%d.%d",da,m,year);
     }
return 0;
  }








