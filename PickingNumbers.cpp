#include<iostream>
using namespace std;

//Sorting the given array
void sort(int a[],int n)
 {
   int i,j,key;
   for(i=1;i<n;i++)
    {
        j = i-1;
        key = a[i];
        while(j>=0 && a[j]>key)
         {
             a[j+1]=a[j];
             j--;
         }
         a[j+1]=key;
    }
 }

 //Finding the Maximum Length of Sub-Array
 int maxlen(int a[],int n)
 {
     int i,j,c,max,d;
     c=0;
     max=0;
     for(i=0;i<n-1;i++)
     {
         for(j=i+1;j<n;j++)
          {
               d = a[j]-a[i];
                 if(d<=1)
                   c++;
                 else
                  break;
          }
        if(c>max)
          max=c;
          c=0;
     }
 return (max+1);
 }

//The MAIN Function
int main()
{
    int n,a[100],i;
    cin>>n;
    for(i=0;i<n;i++)
      cin>>a[i];
    sort(a,n);
    int ans = maxlen(a,n);
       cout<<ans;
}
