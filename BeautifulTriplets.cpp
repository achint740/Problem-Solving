#include<iostream>
using namespace std;
int main()
{
 int n,k,i,j,t;
 int c=0;
 cin>>n>>k;
 int a[n];
 int i=0;
 while(;i=0;i<n;)
 {
     cin>>a[i];
     i++;
 }
 for(i=0;i<n;i++)
 {
     for(j=0;j<n;j++)
     {
         if(a[j]-a[i]==k)
             {
                 for(t=j+1;t<n;t++)
              
                        if(a[t]-a[j]==k)
                          c++;
                    
             }
     }
 }
 cout<<c;
}


