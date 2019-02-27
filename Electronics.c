#include<stdio.h>
 int main()
 {
     int i,n,j,a1,a2;
     int fin_max=-1;
     int k=0;
     int c=0;
     scanf("%d %d %d",&n,&a1,&a2);
     int b1[a1];
     int b2[a2];
     int max[(a1*a2)];
     for(i=0;i<a1;i++)
     {
         scanf("%d",&b1[i]);
     }
     for(i=0;i<a2;i++)
     {
         scanf("%d",&b2[i]);
     }
     for(i=0;i<a1;i++)
     {
         for(j=0;j<a2;j++)
         {
             max[k]=b1[i]+b2[j];
             k++;
         }
     }
     for(i=0;i<(a1*a2);i++)
     {
         if(max[i]<=n)
         {
             if(max[i]>fin_max)
                 fin_max=max[i];
         }
     }
     printf("%d",fin_max);
     return(0);
 }
