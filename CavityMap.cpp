#include <bits/stdc++.h>

using namespace std;

// Complete the cavityMap function below.
void cavityMap(vector<string>v) {
  int n = v.size();
  for(int i=1;i<n-1;i++)
  {
      //cout<<"n"<<endl;
      for(int j=1;j<n-1;j++)
       {
           int ch = (int)v[i][j];
           int ch1 = (int)v[i-1][j];
           int ch2 = (int)v[i+1][j];
           int ch3 = (int)v[i][j-1];
           int ch4 = (int)v[i][j+1];
           //cout<<ch<<endl;
           if(ch>ch1 && ch>ch2 && ch>ch3 && ch>ch4){
              v[i][j]='X';
             // cout<<"d";
           }
       }
  }

  for(int i=0;i<n;i++)
    {
        cout<<v[i]<<endl;
    }
return;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> grid(n);

    for (int i = 0; i < n; i++) {
        string grid_item;
        getline(cin, grid_item);

        grid[i] = grid_item;
    }
  cavityMap(grid);

}
