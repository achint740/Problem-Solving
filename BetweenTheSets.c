#include<stdio.h>
 int main()
     {
     int n,m,i,j,k,s,t;
     scanf("%d %d",&n,&m);
     int a[n];
     int b[m];
     int sum=m+n;
     int count=0;
     int ca=0;
     int cb=0;
     int l=0;
     for(i=0;i<n;i++)
         scanf("%d",&a[i]);
     for(j=0;j<m;j++)
         scanf("%d",&b[j]);
     for(k=a[n-1];k<=b[0];k++)
         {
         for(t=0;t<n;t++)
             {
                if(k%a[t]==0)
                    {
                    ca++;
                    }
             }
         for(s=0;s<m;s++)
             {
             if(b[s]%k==0)
                 {
                 cb++;
                 }
             }
         count=ca+cb;
         if(count==sum)
             l++;
         count=0;
         ca=0;
         cb=0;
    }
    printf("%d",l);
     return(0);
}
