#include<stdio.h>
 int main()
  {
      int no,p,i,j;
      int k=0;
      scanf("%d %d",&no,&p);
      i=p/2;
      j=no/2 - p/2;
      if(i<j)
        printf("%d",i);
      else
        printf("%d",j);
  }
