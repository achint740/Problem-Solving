#include <stdio.h>
  int main()
  {
     long int i,j,k;
      scanf("%ld",&i);
      scanf("%ld",&j);
      scanf("%ld",&k);
      long int rev=0;
      int count=0;
      long int num,num1,dig;
      int diff=0;
      int c=0;
 for(long int l=i;l<=j;l++)
          {
          num=l;
          num1=l;
        while(num>0)
            {
            dig=num%10;
            c++;
            num=num/10;
            }
          while(num1>0)
              {
              if(num1%10!=0)
                rev+=(num1%10)*pow(10,c-1);
              c--;
              num1=num1/10;
              }
          diff=abs(rev-l);
          if(diff%k==0)
              count++;
          c=0;
          rev=0;
          }
      printf("%d",count);
      }
