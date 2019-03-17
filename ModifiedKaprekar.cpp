 #include <bits/stdc++.h>
 #include<math.h>
 using namespace std;


// Complete the kaprekarNumbers function below.
void kaprekarNumbers(int p, int q) {
  int ar[2], a, count = 0,l=0;
  for (long i = p; i <= q; i++)
  {
    count=0;
    unsigned long n = i * i, x = i;
    while (x != 0)
    {
      count++;
      x = x / 10;
    }
    long h = pow(10, count);
    ar[0] = n % h;
    ar[1] = n / h;
    n = i * i;
    if (ar[0] + ar[1] == i)
    {
      cout << i << " ";
      l++;
    }
  }
    if(l==0)
    {
        cout<<"INVALID RANGE";
    }
  }

int main()
{
    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    kaprekarNumbers(p, q);

    return 0;
}
