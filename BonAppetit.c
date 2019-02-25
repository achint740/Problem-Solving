#include<stdio.h>
  int main()
      {
      int n,k,i,bcharge,diff;
      int sum=0;
      scanf("%d %d",&n,&k);
      int bill[n];
      for(i=0;i<n;i++)
          {
          scanf("%d",&bill[i]);
          if(i!=k)
            sum+=bill[i];
          }
      scanf("%d",&bcharge);
      diff=bcharge-(sum/2);
        if(diff==0)
            printf("Bon Appetit");
        else
            printf("%d",diff);
      return(0);
  }





