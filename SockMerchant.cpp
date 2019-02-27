#include<iostream>
using namespace std;
int main()
{
  int n,*ar,i,j;
  cin>>n;
  ar=new int[n];
  for(i=0;i<n;i++)
  {
    cin>>ar[i];
  }
  int count,p=0;
  for(i=0;i<n;i++)
  {
    count=1;
    if(ar[i]!=0)
    {
       for(j=i+1;j<n;j++)
        {
         if(ar[i]==ar[j])
          {
            count++;
            ar[j]=0;
          }
        }
    }
    ar[i]=0;
    p=p+(count/2);
  }
  cout<<p;
  return 0;
}
