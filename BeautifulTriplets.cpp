#include<iostream>
using namespace std;
int main()
{
 int n,k,i,j,t;
 int c=0;
 cin>>n>>k;
 int a[n];
 for(i=0;i<n;i++)
 {
     cin>>a[i];
 }
 for(i=0;i<n;i++)
 {
     for(j=0;j<n;j++)
     {
         if(a[j]-a[i]==k)
             {
                 for(t=j+1;t<n;t++)
                    {
                        if(a[t]-a[j]==k)
                          c++;
                    }
             }
     }
 }
 cout<<c;
}


