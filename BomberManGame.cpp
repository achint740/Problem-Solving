#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

void build(vector<string>&ans,int temp_ans[200][200],int n,int m){
     for(int i=0;i<n;i++){
         string xyz = "";
         for(int j=0;j<m;j++){
             if(temp_ans[i][j]==0)
                xyz+='.';
             else
                xyz+='O';
         }
         ans.push_back(xyz);
     }
     return ;
}

// Complete the bomberMan function below.
vector<string> bomberMan(int seconds, vector<string> grid) {
        int n = grid.size();
        int m = grid[0].length();
        if(seconds<=1)
            return grid;

        //Calculate for N=2;
        int ans_2[200][200];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='O'){
                    ans_2[i][j]=1;
                }
                else{
                    ans_2[i][j]=3;
                }
            }
        }

        //Calculate for N=3;
        int ans_3[200][200];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                //Check all 4 possibilities
            bool ans1 = ((j+1<m && ans_2[i][j+1]==1) || (j-1>=0 && ans_2[i][j-1]==1)); 
            bool ans2 = ((i+1<n && ans_2[i+1][j]==1) || (i-1>=0 && ans_2[i-1][j]==1));
            bool ans3 = ans_2[i][j]==1;
            if(ans1 || ans2 || ans3){
                ans_3[i][j]=0;            
            }
            else{
                ans_3[i][j]=ans_2[i][j]-1;
            }
            }
        }

        //Calculate for N=4;
        int ans_4[200][200];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(ans_3[i][j]==2)
                    ans_4[i][j]=ans_3[i][j]-1;
                else
                    ans_4[i][j]=3;
            }
        }
        //Calculate for N=5;
        int ans_5[200][200];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
            bool ans1 = ((j+1<m && ans_4[i][j+1]==1) || (j-1>=0 && ans_4[i][j-1]==1)); 
            bool ans2 = ((i+1<n && ans_4[i+1][j]==1) || (i-1>=0 && ans_4[i-1][j]==1));
            bool ans3 = ans_3[i][j]==1;
            if(ans1 || ans2 || ans3)
                ans_5[i][j]=0;
            else
                ans_5[i][j]=ans_4[i][j]-1;
            }
        }
        //Construct the answer
        vector<string>ans;
        if(seconds%2==0)
            build(ans,ans_2,n,m);
        else if((seconds+1)%4==0)
            build(ans,ans_3,n,m);
        else if((seconds-1)%4==0)
            build(ans,ans_5,n,m);
        else
            cout<<"Sorry";
        
        return ans;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string rcn_temp;
    getline(cin, rcn_temp);

    vector<string> rcn = split_string(rcn_temp);

    int r = stoi(rcn[0]);

    int c = stoi(rcn[1]);

    int n = stoi(rcn[2]);

    vector<string> grid(r);

    for (int i = 0; i < r; i++) {
        string grid_item;
        getline(cin, grid_item);

        grid[i] = grid_item;
    }

    vector<string> result = bomberMan(n, grid);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

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
