#include<stdio.h>
int main()
{
    int test,n,k;
    int count=0;
    scanf("%d",&test);
    for(int i=0;i<test;i++)
    {
        scanf("%d",&n);
        scanf("%d",&k);
        int arr[n];
        int j=0;
        while(j<n)
        {
            scanf("%d",&arr[j]);
            if(arr[j]<=0){
                count ++;
            }
            j++;
        }
        if(count>=k){
            printf("NO\n");
        }
        if(count<k){
            printf("YES\n");
        }
        count=0;
    }
}
