#include<iostream>
using namespace std;
  int main()
  {
     long i,j,k,n,m;
      cin>>n;
     long ar[n];
     long ar1[n];
     long s=0;
      for(i=0;i<n;i++)
      {
          cin>>ar[i];
      }
      cin>>m;
      long a[m];
      for(i=0;i<m;i++)
      {
          cin>>a[i];
      }
      for(k=0;k<n;k++)
      {
          if(k==0)
          {
              ar1[s]=ar[k];
              s++;
          }
          if(k!=0 && ar[k]!=ar[k-1])
          {
              ar1[s]=ar[k];
              s++;
          }
      }
     long count=s+1;
      for(i=0;i<m;i++)
      {
          for(j=(count-1)-1;j>=0;j--)
          {
              if(a[i]>=ar1[j])
                  count--;
              else
                break;
          }
          cout<<count<<endl;
      }
return(0);
  }

