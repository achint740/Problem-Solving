#include<stdio.h>
int main()
    {
 int k,n;
    int i,j;
    scanf("%d %d",&n,&k);
    int h[n];
    int max=0;
 for(i=0;i<n;i++)
     {
     scanf("%d",&h[i]);
     if(h[i]>max)
         max=h[i];
     }
 int diff=max-k;
    if(diff>=0)
    printf("%d",diff);
    else
        printf("0");
    return(0);
}
