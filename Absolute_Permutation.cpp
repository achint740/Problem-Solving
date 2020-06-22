#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the absolutePermutation function below.
vector<int> absolutePermutation(int n, int k) {
          vector<int>v;
          map<int,bool>visit;
          for(int i=1;i<=n;i++){
              visit[i]=false;
          }
          for(int i=1;i<=n;i++){
              int c1 = i - k;
              int c2 = i + k;
              int c = 0;
              if((!(c1<=0 || c1>n))&&visit[c1]==false){
                c=c1;
                visit[c1]=true;
              }
              else if((!(c2<=0 || c2>n))&&visit[c2]==false){
                c=c2;
                visit[c2]=true;
              }
              else if(c1==c2)
                c=c1;
             else{
                  while(!v.empty()){
                       v.pop_back();
                   }
                 v.push_back(-1);
                 break;
              }
             v.push_back(c);
           }
    return v;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string nk_temp;
        getline(cin, nk_temp);

        vector<string> nk = split_string(nk_temp);

        int n = stoi(nk[0]);

        int k = stoi(nk[1]);

        vector<int> result = absolutePermutation(n, k);

        for (int i = 0; i < result.size(); i++) {
            fout << result[i];

            if (i != result.size() - 1) {
                fout << " ";
            }
        }

        fout << "\n";
    }

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
