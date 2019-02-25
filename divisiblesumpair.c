#include<stdio.h>
int main()
{
  int m,i,n,j,k,t;
  scanf("%d %d",&n,&k);
  int count=0;
  int arr[n];
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(j=0;j<n;j++)
  {
    m=arr[j];
    for(t=j+1;t<n;t++)
    {
      if(((m+arr[t])%k)==0)
        count++;
    }
  }
printf("%d",count);
}
