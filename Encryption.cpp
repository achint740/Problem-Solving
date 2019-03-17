#include <bits/stdc++.h>

using namespace std;

// Complete the encryption function below.
void encryption(string s) {
  int l = sqrt(s.length());
  double checkl = sqrt(s.length());
  if(checkl!=l)
     l+=1;
 int len = s.length();
  int i=0;
  int j=i;
  while(i<l)
  {
    if(j<len)
      cout<<s[j];
      j+=l;
      if(j>=len)
        {
            cout<<" ";
            i++;
            j=i;
        }
  }
return;
}

int main()
{
    string s;
    getline(cin, s);

    encryption(s);
    return 0;
}
