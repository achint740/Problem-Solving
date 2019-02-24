#include<stdio.h>
 int main()
     {
     int i,n,j;
     int da,m,k;
     int count=0;
     scanf("%d",&n);
     int s[n];
     int sum=0;
     for(i=0;i<n;i++)
         {
         scanf("%d",&s[i]);
         }
     scanf("%d %d",&da,&m);
     for(j=0;j<n-m+1;j=j+1)
         {
        for(k=j;k<j+m;k++)
            {
            sum+=s[k];
            }
         if(sum==da)
             count++;
         sum=0;
         }
     printf("%d",count);
     return(0);
     }


