#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n,ar[1000],count[1000],t=1,c,p;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>ar[i];
  }

  count[0]=n;
  do
  {
    int min=1000;
    c=0;
    for(int j=0;j<n;j++)
     {
      if(ar[j]!=0)
      {
       if(min>ar[j])
       min=ar[j];
      }
     }
    for(int k=0;k<n;k++)
    {
      if(ar[k]>=min)
      {
        ar[k]=ar[k]-min;
        c++;
      }
    }
    count[t]=c;
    t++;
  } while(c>0);
  p=t;

  int v = 1;
  while(v < p - 1){
    cout<<count[v]<<endl;
    v++;
  }
  return 0;
}
