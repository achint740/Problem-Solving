#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int i;
  int a[n];
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  int min=a[0];
  int countmin=0;
  int j,k;
  int countmax=0;
  for(j=1;j<n;j++)
  {
    if(a[j]<min)
    {
      min=a[j];
      countmin++;
    }
  }
 int max=a[0];
  for(k=1;k<n;k++)
  {
    if(a[k]>max)
    {
      max=a[k];
      countmax++;
    }
  }
  printf("%d %d",countmax,countmin);
}

//C++ program 

// #include<iostream>
// int main()
// {
//   int n;
//   cin>>n;
//   int i;
//   int a[n];
//   for(i=0;i<n;i++)
//   {
//     cin>>a[i];
//   }
//   int min=a[0];
//   int countmin=0;
//   int j,k;
//   int countmax=0;
//   for(j=1;j<n;j++)
//   {
//     if(a[j]<min)
//     {
//       min=a[j];
//       countmin++;
//     }
//   }
//  int max=a[0];
//   for(k=1;k<n;k++)
//   {
//     if(a[k]>max)
//     {
//       max=a[k];
//       countmax++;
//     }
//   }
//   cout<<countmax<<" "<<countmin;
//   return 0;
// }
