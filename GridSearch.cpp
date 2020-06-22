#include<iostream>
using namespace std;

bool search(char ch[1000][1000],char chs[1000][1000],int i,int j,int m,int n)
 {
     //int i2=1,j2=1;                   //niche input [1][1] se liya hai
     bool res=true;
     for(int i1=1;i1<=m;i1++)        
      {
          for(int j1=1;j1<=n;j1++)     
          {
            if(ch[i1+i-1][j1+j-1]!=chs[i1][j1])     //i j kar rakha tha
              {
                  res=false;
                  break;
              }
          }
        if(!res)
          break;
      }
    return res;
 }

int main()
{
    int t,i,j,m,n,ms,ns;
    cin>>t;
    while(t--)
     {
         cin>>m>>n;
         char ch[1000][1000];
         //Input 1st 2-D Array
         for(i=1;i<=m;i++)
          {
              for(j=1;j<=n;j++)
               {
                   cin>>ch[i][j];
               }
          }
          cin>>ms>>ns;
          char chs[1000][1000];
          //Input 2nd 2-D Array
          for(i=1;i<=ms;i++)        //m kar rakha tha
          {
              for(j=1;j<=ns;j++)      //yaha n kar rakha tha
               {
                   cin>>chs[i][j];
               }
          }
          //Start Searching
          bool res=false;
          for(i=1;i<=m-ms+1;i++)                   //+1 here
          {
              for(j=1;j<=n-ns+1;j++)               //+1 here
               {
                   if(ch[i][j]==chs[1][1])        //input 1 1 se liya hai yaar
                     {
                         if(search(ch,chs,i,j,ms,ns))   //pass ms ns instead m n
                           {
                               res=true;
                               break;
                           }
                     }
               }
            if(res)
             break;
          }
          if(res)
           cout<<"YES\n";
          else
           cout<<"NO\n";
     }
 return 0;
}
