#include<iostream>
using namespace std;

//Sorting the given array using selection sort
void sort(int arr[],int n)
 {
   int i,j,key;
   for(i=1;i<n;i++)
    {
        j = i-1;
        key = arr[i];
        while(j>=0 && arr[j]>key)
         {
             arr[j+1]=arr[j];
             j--;
         }
         arr[j+1]=key;
    }
 }

 //Finding the Maximum Length of Sub-Array
 int maxlen(int arr[],int n)
 {
     int i,j,c,max,d;
     c=0;
     max=0;
     for(i=0;i<n-1;i++)
     {
         for(j=i+1;j<n;j++)
          {
               d = arr[j]-arr[i];
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
    int n,arr[100],i;
    cin>>n;
    for(i=0;i<n;i++)
      cin>>arr[i];
    sort(arr,n);
    int ans = maxlen(arr,n);
       cout<<ans;
}
