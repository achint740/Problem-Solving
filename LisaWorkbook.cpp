#include<iostream>
using namespace std;
 int main()
 {
     int n,k,j,i,x,m;
     int pgno=1;
     int count=0;

     cin>>n>>k;
     int chap[n];
     for(i=1;i<=n;i++)
         cin>>chap[i];
     for(i=1;i<=n;i++)
     {
         x=chap[i];
         m=0;
         while(x>0)
         {
             for(j=1+m;j<=k+m;j++)
             {
                 if(j>chap[i])
                     break;
                else if(pgno==j)
                     count++;
             }
             x=x-k;
             pgno++;
             m+=k;
         }
     }
     cout<<count;
 }
