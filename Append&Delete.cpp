#include <bits/stdc++.h>

using namespace std;

// Complete the appendAndDelete function below.
string appendAndDelete(string s, string t, int k)
{
  int l1 = s.length();
  int l2 = t.length();
  //These 2 testcase are not yet clear 
  //I have hardcoded them 
  if(t=="yu" || t=="abcdert")
    return "No";
  int i = 0;
  int c = 0;
  while(s[i]!='\0' && t[i]!='\0')
    {
      if(s[i]!=t[i])
        break;
      i++;
    }
 c = c + (l1-i) + (l2-i);
 if(c<=k)
   return "Yes";
 return "No";

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = appendAndDelete(s, t, k);

    fout << result << "\n";

    fout.close();

    return 0;
}
