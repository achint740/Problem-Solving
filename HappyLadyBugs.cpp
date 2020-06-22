#include <bits/stdc++.h>

using namespace std;

// Complete the happyLadybugs function below.
string happyLadybugs(string b) {
  int a[26];
  for(int i=0;i<26;i++)
   {
       a[i]=0;
   }
  int under_score = 0;
  for(int i=0;i<b.length();i++)
   {
    if(b[i]=='_')
       under_score++;
    else
      a[b[i]-65]++;
   }
  if(under_score==b.length())
    return "YES";
    bool res = true;
for(int i=0;i<26;i++)
 {
     if(a[i]==1)
       res=false;
 }
  if(res==false)
    return "NO";
  for(int i=1;i<b.length()-1&&res&&under_score==0;i+=2)
  {
      if(!(b[i]==b[i+1] || b[i]==b[i-1]))
        res=false;
  }
  if(!res)
    return "NO";
 return "YES";

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int g;
    cin >> g;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int g_itr = 0; g_itr < g; g_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string b;
        getline(cin, b);

        string result = happyLadybugs(b);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
