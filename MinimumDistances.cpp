#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int n,i,j,d;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
      cin>>a[i];
    d=n;
    int min=n;
    int f=0;
    for(i=0;i<n;i++)
     {
        for(j=0;j<n;j++)
         {
             if(i!=j && a[i]==a[j])
                d=abs(i-j);
         }
        if(d<min)
         {
             min=d;
             f--;
         }
     }
     if(f==0)
       min = -1;
    cout<<min;
}
