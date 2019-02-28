#include <stdio.h>
 int main()
     {
     int h=1;
     int i,j;
     int t,n;
     scanf("%d",&t);
     for(i=0;i<t;i++)
         {
         scanf("%d",&n);
         for(j=1;j<=n;j++)
             {
             if(j%2==0)
                 h++;
             else
                 h*=2;
             }
         printf("%d\n",h);
         h=1;
         }
     return(0);
     }
