#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  long long int t,rem=3;
    cin>>t;
    long long int time = t;
//    while(t>rem){
//        t = t - rem;
//        rem*=2;
//    }
//    cout<<rem-t+1;
t-=1;
  int x = log2((t/3)+1);
 long long int a = (pow(2,x) - 1)*3;
 a+=1;
 long long int v = pow(2,x)*3;
 v-=(time-a);
 cout<<v;
}

