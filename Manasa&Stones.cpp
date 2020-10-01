
#include<bits/stdc++.h>
using namespace std;

/*int* duprem(int ch[],int len,int cnew[],int i,int k)
 {
     if(i==len)
        {
        //cnew[k]='\0';
        return(cnew);
        }

     if(ch[i]!=ch[i+1])
         cnew[k++]=ch[i];

    duprem(ch,len,cnew,i+1,k);
 }
*/


bool notpresent(vector<int>v,int se)
 {
     int p;
     int n1 = v.size();
     for(p=0;p<n1;p++)
       {
           if(v[p]==se)
             return false;
       }
    return true;
 }
int main()
{
    int q,n,a,b,x,i;
    cin>>q;
    vector<int>v;
    while(q--)
    {
      cin>>n>>a>>b;
      for(i=0;i<n;i++)
       {
          x = (n-i-1)*a + (i)*b;
          if(notpresent(v,x))
            v.push_back(x);
       }
       sort(v.begin(),v.end());
       //int valnew[1000];
     //duprem(val,j,valnew,0,0);

     //int s = sizeof(valnew)/sizeof(int);
     for(i=0;i<v.size();i++)
       cout<<v[i]<<" ";
    cout<<endl;
    while(!v.empty())
      v.pop_back();
    }
}
