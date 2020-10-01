#include <bits/stdc++.h>

using namespace std;

// Complete the findDigits function below.
int findDigits(int n)
 {
  int dig;
  int count=0;
  int n1=n;
 //while loop helps in fninding the count of digits
  while(n>0)
  {
      dig=n%10;
      if(dig!=0 && n1%dig==0)
        count++;
    n/=10;
  }
return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = findDigits(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
