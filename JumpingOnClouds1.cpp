#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
      cin>>a[i];
      int count=0;
    for(i=0;i<n;)
     {
         if(i+2<n && a[i+2]!=1)
           i+=2;
        else
          i++;
        count++;
     }
    cout<<count-1;
    }
