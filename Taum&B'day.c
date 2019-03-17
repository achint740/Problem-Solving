#include<stdio.h>
  int main()
  {
      int t,i;
      long long int min,b,w,wc,bc,z;
      scanf("%d",&t);
      for(i=0;i<t;i++)
      {
          scanf("%ld %ld",&b,&w);
          scanf("%ld %ld %ld",&bc,&wc,&z);
          if(bc<wc)
          {
              if((bc+z)<wc)
                 min=w*(bc+z-wc)+(b*bc)+(w*wc);
              else
                  min=b*bc+w*wc;
          }
          if(bc>wc)
          {
              if((wc+z)<bc)
                  min=b*(wc+z-bc)+(b*bc)+(w*wc);
              else
                  min=b*bc+w*wc;
          }
          if(bc==wc)
          {
              min=b*bc+w*wc;
          }
          printf("%ld\n",min);
          min=0;
      }
  }
