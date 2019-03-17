#include<iostream>
using namespace std;
// Complete the timeInWords function below.
void timeInWords(int h, int m) 
{
    string s[12]={"one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve"};
    string s1[29]={"one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty","twenty one","twenty two","twenty three","twenty four","twenty five","twenty six","twenty seven","twenty eight","twenty nine"};
    if(m==00)
     cout<<s[h-1]<<" "<<"o' clock";
     else if(m==1)
     cout<<s1[m-1]<<" minute past "<<s[h-1];
    else if(m>01 && m<15)
     cout<<s1[m-1]<<" minutes past "<<s[h-1];
     else if(m==15)
      cout<<"quarter past "<<s[h-1];
     else if(m>15 && m<=29)
      cout<<s1[m-1]<<" minutes past "<<s[h-1];
      else if(m==30)
       cout<<"half past "<<s[h-1];
       else if(m>30 && m<45)
        cout<<s1[59-m]<<" minutes to "<<s[h];
      else if(m==45)
       cout<<"quarter to "<<s[h];
       else
        cout<<s1[59-m]<<" minutes to "<<s[h];
}

int main()
{
    int h;
    cin >> h;
    int m;
    cin >> m;
    timeInWords(h,m);
    return 0;
}
