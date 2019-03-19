#include<iostream>
using namespace std;
int main()
{
  int n,*b,i,count=0,c=0,c1=0;
  cin>>n;
  b=new int[n];
  for(i=0;i<n;i++)
  {
    cin>>b[i];
  }
  for(i=0;i<n;i++)
  {
    if(b[i]%2!=0)
    {
      count++;
    }
  }
  if(count%2==0)
  {
    for(i=0;i<n;i++)
    {
      if(b[i]%2!=0)
      {
        b[i]=b[i]+1;
        b[i+1]=b[i+1]+1;
        c=c+2;
      }
    }
    for(i=0;i<n;i++)
    {
      if(b[i]%2==0)
      {
        c1++;
      }
    }
    if(c1==n)
      cout<<c;
  }
  else
    cout<<"NO";
  return 0;
}
