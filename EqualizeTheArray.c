#include <stdio.h>
int main()
{
    int t,i,j,k,pos;
    scanf("%d",&t);
    int a[t];
    int co=0;
    int count=0;
    int del;
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<t;j++)
    {
        for(k=0;k<t;k++)
        {
            if(a[j]==a[k] && k!=j)
            co++;
        }
  if(co>count)
        {
          count=co;
            pos=j;
        }
        co=0;
    }
del=t-(count+1);
    printf("%d",del);
    return 0;
}
