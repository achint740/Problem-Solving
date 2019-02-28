#include<iostream>
using namespace std;
int main()
{
    int n,p[1000];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>p[i];
    }
    for(int j=1;j<=n;j++)
    {
        for(int k=1;k<=n;k++)
        {
        if(p[k]==j)
        {
            for(int l=1;l<=n;l++)
            {
                if(p[l]==k)
                {
                    cout<<l<<endl;
                }
            }
        }

        }
    }
    return 0;
}
