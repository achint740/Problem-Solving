#include <bits/stdc++.h>

using namespace std;

// Complete the biggerIsGreater function below.
string biggerIsGreater(string arr) {
    int n= arr.length();
    int i=n-1;
    while(i>0 && arr[i-1]>=arr[i]){
        i--;
    }
    if(i==0){
        return "no answer";
    }
    int pivot=i-1;
    int j=n-1;
    while(arr[j]<=arr[pivot]){
        j--;
    }
    swap(arr[j],arr[pivot]);
    int s=pivot+1;
    int e=n-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
  return arr;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int T;
    cin >> T;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int T_itr = 0; T_itr < T; T_itr++) {
        string w;
        getline(cin, w);

        string result = biggerIsGreater(w);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
