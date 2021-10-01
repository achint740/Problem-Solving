#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

int sumofheights(vector<int>a){
    int s = 0;
    for(auto ele : a){
        s = s + ele;
    }
    return s;
}

// Complete the surfaceArea function below.
int surfaceArea(vector<vector<int>> A) {
    int h = A.size();
    int w = A[0].size();

    int ans = 0;

    //Neeche base
    ans = ans + h*w;
    cout<<ans<<endl;
    //last row ke sab dikhenge right se
    ans = ans + sumofheights(A[h-1]);
    cout<<ans<<endl;
    //Right se baaki rows ke liye
    for(int i=h-2;i>=0;i--){
        for(int j=0;j<w;j++){
            if(A[i][j]>A[i+1][j]){
                ans = ans + (A[i][j]-A[i+1][j]);
            }
        }
    }
    cout<<ans<<endl;
    //Left side se 0th row
    ans = ans + sumofheights(A[0]);
    cout<<ans<<endl;
    //Left side se baaki ke liye
    for(int i=1;i<h;i++){
        for(int j=0;j<w;j++){
            if(A[i][j]>A[i-1][j]){
                ans = ans + A[i][j]-A[i-1][j];
            }
        }
    }
    cout<<ans<<endl;
    //Peeche se har row ke last column saare dikhenge
    for(int i=0;i<h;i++){
        ans = ans + A[i][w-1];
    }
    cout<<ans<<endl;
    //Peeche se baaki ke liye
    for(int j=w-2;j>=0;j--){
        for(int i=0;i<h;i++){
            if(A[i][j]>A[i][j+1]){
                ans = ans + A[i][j] - A[i][j+1];
            }
        }
    }
    //Upar se poora
    ans = ans + h*w;
    cout<<ans<<endl;
    //Saamne se har row ka pehla column
    for(int i=0;i<h;i++){
        ans = ans + A[i][0];
    }
    cout<<ans<<endl;
    //baaki columns ke liye
    for(int j=1;j<w;j++){
        for(int i=0;i<h;i++){
            if(A[i][j]>A[i][j-1]){
                ans = ans + A[i][j] - A[i][j-1];
            }
        }
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string HW_temp;
    getline(cin, HW_temp);

    vector<string> HW = split_string(HW_temp);

    int H = stoi(HW[0]);

    int W = stoi(HW[1]);

    vector<vector<int>> A(H);
    for (int i = 0; i < H; i++) {
        A[i].resize(W);

        for (int j = 0; j < W; j++) {
            cin >> A[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = surfaceArea(A);

    fout << result << "\n";

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
