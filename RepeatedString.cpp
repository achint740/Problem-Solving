#include <bits/stdc++.h>
#include<cstring>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n)
{
  int l=s.length();
  long count = 0;
   for(int i=0;i<l;i++)
    {
        if(s[i]=='a')
          count+=1;
    }
  count = count * (n/l);
   for(int i=0;i<(n%l);i++)
    {
        if(s[i]=='a')
          count+=1;
    }
 return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
