#include<iostream>
using namespace std;


int main()
{
    int n,k,i;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++)
      cin>>a[i];
    int f[k];
    for(i=0;i<k;i++)
      f[i]=0;
    for(i=0;i<n;i++)
    {
        f[a[i]%k]++;
    }
   if(k%2==0)
     f[k/2]=min(1,f[k/2]);

    int r = min(f[0],1);
    for(i=1;i<=k/2;i++)
     {
         r+=max(f[i],f[k-i]);
     }
    cout<<r;
}
