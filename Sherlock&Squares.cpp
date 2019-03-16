#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    long a,b,num;
    int c=0;
    int f=0;
     cin>>t;
     while(t--)
     {
         cin>>a>>b;
         for(long i=a;i<=b;i++)
         {
             double k1=pow(i,0.5);
             long k2=(long)k1;
             if(k1==k2)
             {
              c++;
               while(1)
               {
                 k2++;
                 num=pow(k2,2);
                  if(num<=b)
                    c++;
                  else
                    {
                        f--;
                        break;
                    }
               }
               if(f<0)
                 break;
             }
             if(f<0)
               break;
         }
         cout<<c<<endl;
         c=0;
         f=0;
     }
}
