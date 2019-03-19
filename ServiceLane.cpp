#include<iostream>
using namespace std;
int main()
{
 int n,t,i,ent,exit,maxw;
 cin>>n>>t;
 int a[n];
  for(i=0;i<n;i++)
    cin>>a[i];
  while(t--)
  {
      cin>>ent>>exit;
      for(i=ent;i<=exit;i++)
       {
         if(i==ent)
           maxw=a[i];
          if(i>ent && a[i]<maxw)
            maxw=a[i];
       }
       cout<<maxw<<endl;
  }
}
