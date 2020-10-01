#include<bits/stdc++.h>
//Prefer to use bits as it creates less confusion of header files
using namespace std;
int main()
{
    int n,num,k,q,temp,i,j;
    cin>>n>>k>>q;
    k%=n;
    int a[n+k];
    for(int i=0;i<n;i++)
      cin>>a[i];

    i=n+k-1;
    j=n-1;
    while(i>k-1)
        a[i--]=a[j--];
    i=0;
    j=n;
    while(i<k)
     a[i++]=a[j++];
     //for(i=0;i<n;i++)
      //cout<<a[i]<<" ";
    /*while(k--)
    {
        temp=a[n-1];
        for(int j=n-1;j>0;j--)
          a[j]=a[j-1];
        a[0]=temp;
    }*/
   while(q--)
    {
        cin>>num;
        cout<<a[num]<<endl;
    }
return 0;
}

