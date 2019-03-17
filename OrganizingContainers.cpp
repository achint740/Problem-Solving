#include<iostream>
using namespace std;

void sort(int ar[],int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
     {
         j=i-1;
         key=ar[i];
         while(j>=0 && ar[j]>key)
          {
              ar[j+1]=ar[j];
              j-=1;
          }
        ar[j+1]=key;
     }
  return;
}

int main()
 {
     int q,n,i,j;
     cin>>q;
     while(q--)
      {
          cin>>n;
          int a[n][n];
          int sum1[n]={0};
          int sum2[n]={0};
          for(i=0;i<n;i++)
           {
               for(j=0;j<n;j++)
                 {
                     cin>>a[i][j];
                     sum1[i]+=a[i][j];
                 }
           }
           for(j=0;j<n;j++)
           {
               for(i=0;i<n;i++)
                sum2[j]+=a[i][j];
           }
        sort(sum1,n);
        sort(sum2,n);
        for(i=0;i<n;i++)
        {
            if(sum1[i]!=sum2[i])
               break;
        }
        if(i!=n)
          cout<<"Impossible\n";
        else
          cout<<"Possible\n";
      }
 }
