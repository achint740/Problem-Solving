#include <bits/stdc++.h>
using namespace std;

// void rot(vector<int>a,int p){
//     int temp = a[p];
//     a[p]=a[p+1];
//     a[p+1]=a[p+2];
//     a[p+2]=temp;
// return;
// }

// Complete the larrysarray function below.
string larrysarray(vector<int>arr) {
    string ans;
 int n = arr.size();
 int i,j;
 //cout<<"k";
 for(i=0;i<n-2;i++){
     for(j=n-3;j>=i;j--){
         while(arr[j]>arr[j+1] || arr[j]>arr[j+2]){
             //rot(arr,j);
             int temp = arr[j];
             arr[j]=arr[j+1];
            arr[j+1]=arr[j+2];
            arr[j+2]=temp;
         }
         //cout<<"Hi";
     }
 }
 if(arr[n-2]<arr[n-1])
   ans = "YES";
  else
   ans="NO";

return ans;
}

int main()
{
    int t,n,d;
    cin >> t;
    while(t--){
        cin>>n;
        vector<int>a;
        for(int i=0;i<n;i++){
            cin>>d;
            a.push_back(d);
        }
        cout<<larrysarray(a)<<endl;
    }
}   
