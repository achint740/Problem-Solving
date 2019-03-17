#include<stdio.h>
  int main()
  {
      int t,i,n,c,m;
      int cho;
      int wrap;
      int wrap1,wrap2;
      scanf("%d",&t);
      for(i=0;i<t;i++)
      {
         scanf("%d %d %d",&n,&c,&m);
          cho=(int)n/c;
          wrap=cho;
          while(wrap>=m)
          {
             cho+=(int)wrap/m;
              wrap1=wrap%m;
              wrap2=(int)wrap/m;
              wrap=wrap2+wrap1;
          }
          printf("%d\n",cho);
      }
  }
