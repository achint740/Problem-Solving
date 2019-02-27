#include<iostream>
#include<cstring>
#include<string.h>
using namespace std;

int main()
{
    int i,ht,max;
    int a[26];
    char ch[20];
    for(i=0;i<26;i++)
      cin>>a[i];
      cin.get();
    cin.getline(ch,20);
    int len = strlen(ch);
      //cout<<len;
    for(i=0;i<len;i++)
      {
          int index = ch[i] - 97;
         ht = a[index];
         if(i==0)
           max=ht;
         if(i>0)
         {
             if(ht>max)
           max=ht;
         }
      }
      //cout<<max<<" "<<ht;
   cout<<(max*len);
}
