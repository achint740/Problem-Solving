#include<stdio.h>
#include<math.h>
  int main()
      {
     int n,m,diff,dif;
      scanf("%d %d",&n,&m);
      int a[m];
      int min[n];
      for(int i=0;i<m;i++)
         {
         scanf("%d",&a[i]);
          }
      for(int j=0;j<n;j++)
          {
          for(int k=0;k<m;k++)
              {
              dif=(a[k]-j);
        diff=(dif>0)?(dif):(-dif);
              if(k==0)
                  min[j]=diff;
            if(k!=0 && diff<min[j])
                  min[j]=diff;
              }
          }
      int max=min[0];
      for(int l=1;l<n;l++)
          {
          if(min[l]>max)
              max=min[l];
          }
      printf("%d",max);
    return(0);
}







