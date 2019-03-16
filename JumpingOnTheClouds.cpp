#include<iostream>
using namespace std;
int main()
{
    int n,i,k;
    cin>>n>>k;
    int a[n];
    int e=100;

    for(i=0;i<n;i++)
      cin>>a[i];

    i=0;
    if(a[0]==1)
      e-=2;
    while(1)
     {
       i+=k;
       if(i>n-1)
        break;
       e-=1;
       if(a[i]==1)
        e-=2;
     }
  cout<<(e-1);
}
