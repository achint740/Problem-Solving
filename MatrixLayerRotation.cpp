#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> update(vector<ll>v,ll rot){
     ll s = v.size();
     vector<ll>v2;
     for(ll i=s-rot;i<s;i++){
         v2.push_back(v[i]);
     }
     for(ll i=0;i<s-rot;i++){
         v2.push_back(v[i]);
     }
     return v2;
}

int main()
{
    ll m,n,rotations,r,c,x=0;
     
    cin>>m>>n>>rotations;

    ll** mat = new ll*[m];
    for(ll i=0;i<m;i++){
        mat[i] = new ll[n];
    }

    for(ll i=0;i<m;i++){
        for(ll j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    
    ll k = (min(m,n))/2;

    for(ll i=0;i<k;i++){
        vector<ll>v;

        //1st
        c = i;
        for(ll r=i;r<m-x;r++){
            v.push_back(mat[r][c]);
        }

        //2nd
        r = m - 1 - x;
        for(ll c=i+1;c<n-x;c++){
            v.push_back(mat[r][c]);
        }

        //3rd
        c = n - 1 - x;
        for(ll r=m-1-x-1;r>=i;r--){
            v.push_back(mat[r][c]);
        }

        //4th
        r = i;
        for(ll c=n-1-x-1;c>i;c--){
            v.push_back(mat[r][c]);
        }

        //Optimise Rotations
        ll start_row = i;
        ll start_col = i;
        ll end_row = m - 1 - x;
        ll end_col = n - 1 - x;
        ll mod = 2*(end_col-start_col+end_row-start_row);
        ll rot = rotations%mod;

        //Initial Vector
        // for(ll i=0;i<v.size();i++){
        //     cout<<v[i]<<" ";
        // }
        // cout<<endl;

        //Update the vector
        vector<ll>temp = update(v,rot);
        ll ptr = 0;

        //Update the matrix

        //1st
        c = i;
        for(ll r=i;r<m-x;r++){
            mat[r][c]=temp[ptr];    ptr++;
        }

        //2nd
        r = m - 1 - x;
        for(ll c=i+1;c<n-x;c++){
            mat[r][c]=temp[ptr];    ptr++;
        }

        //3rd
        c = n - 1 - x;
        for(ll r=m-1-x-1;r>=i;r--){
            mat[r][c]=temp[ptr];    ptr++;
        }

        //4th
        r = i;
        for(ll c=n-1-x-1;c>i;c--){
            mat[r][c]=temp[ptr];    ptr++;
        }

        //Updated Vector
        // for(ll i=0;i<temp.size();i++){
        //     cout<<temp[i]<<" ";
        // }
        // cout<<endl;
        x++;
    }

    for(ll i=0;i<m;i++){
        for(ll j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
