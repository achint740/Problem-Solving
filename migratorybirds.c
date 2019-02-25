#include<stdio.h>
  int main()
      {
     int n;
      int ty;
      int sum1=0;
      int sum2=0;
      int sum3=0;
      int sum4=0;
      int sum5=0;
      scanf("%d",&n);
      for(int i=0;i<n;i++)
          {
          scanf("%d",&ty);
          if(ty==1)
              sum1++;
          if(ty==2)
              sum2++;
          if(ty==3)
              sum3++;
          if(ty==4)
              sum4++;
          if(ty==5)
              sum5++;
          }
int a[5]=      {sum1,sum2,sum3,sum4,sum5};
      int max=a[0];
      int k;
     for(int j=1;j<5;j++)
         {
         if(max<a[j])
            { max=a[j];
            k=j;}
         }
      int t=k+1;
      printf("%d",t);
     }






