#include<stdio.h>
#include<math.h>
 int main()
 {
     int test,x,i,y,z,diffxz,diffyz;
     scanf("%d",&test);
     for(i=0;i<test;i++)
     {
 scanf("%d %d %d",&x,&y,&z);
    diffxz=abs(x-z);
    diffyz=abs(y-z);
    if(diffxz==diffyz)
        printf("Mouse C\n");
    else if(diffxz<diffyz)
         printf("Cat A\n");
    else
        printf("Cat B\n");
     }
 }
