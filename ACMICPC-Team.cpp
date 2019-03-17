#include<iostream>
using namespace std;
int find(string s1,string s2,int m1)
{
    int g=0;
    int a=m1;
    while(g<m1)
    {
      if(s1[g]=='0' && s2[g]=='0')
         a--;
     g++;
    }
    return a;
}
int main()
{
    int n,i,j,m;
    int max=0;
    int k=0;
    int count=0;
    cin>>n>>m;
    string s[n];
    int ans[n*n];

    for(i=0;i<n;i++)
      cin>>s[i];
      for(i=0;i<n-1;i++)
      {
          for(j=i+1;j<n;j++)
          {
              int num=find(s[i],s[j],m);
              ans[k]=num;
              if(ans[k]>max)
                max=ans[k];
            k++;
          }
      }
      for(int d=k-1;d>=0;d--)
         {
             if(ans[d]==max)
               count++;
         }
      cout<<max<<endl<<count;
return 0;
}

