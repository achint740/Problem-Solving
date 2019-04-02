 #include<iostream>
 #include<cmath>
using namespace std;

int main()
{
    int i,j;
    int mat[10][10];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
         {
             cin>>mat[i][j];
         }
    }
    int sum=0;
    int a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0;

//The 8 possible Matrices 

    int m1[3][3]={
        {8,3,4},{1,5,9},{6,7,2}
    };
    int m2[3][3]={
        {8,1,6},{3,5,7},{4,9,2}
    };
    int m3[3][3]={
        {6,7,2},{1,5,9},{8,3,4}
    };
    int m4[3][3]={
        {4,9,2},{3,5,7},{8,1,6}
    };
    int m5[3][3]={
        {6,1,8},{7,5,3},{2,9,4}
    };
    int m6[3][3]={
        {4,3,8},{9,5,1},{2,7,6}
    };
    
    int m7[3][3]={
        {2,7,6},{9,5,1},{4,3,8}
    };

    int m8[3][3]={
      {2,9,4},{7,5,3},{6,1,8}
    };

    //Calculating the amount required for conversion to each
          for(i=0;i<3;i++)
           {
               for(j=0;j<3;j++)
                {
                    a1+=abs(mat[i][j]-m1[i][j]);
                }
           }

     for(i=0;i<3;i++)
           {
               for(j=0;j<3;j++)
                {
                    a2+=abs(mat[i][j]-m2[i][j]);
                }
           }
 
       for(i=0;i<3;i++)
           {
               for(j=0;j<3;j++)
                {
                    a3+=abs(mat[i][j]-m3[i][j]);
                }
           }
   
       for(i=0;i<3;i++)
           {
               for(j=0;j<3;j++)
                {
                    a4+=abs(mat[i][j]-m4[i][j]);
                }
           }
      for(i=0;i<3;i++)
           {
               for(j=0;j<3;j++)
                {
                    a5+=abs(mat[i][j]-m5[i][j]);
                }
           }
    
       for(i=0;i<3;i++)
           {
               for(j=0;j<3;j++)
                {
                    a6+=abs(mat[i][j]-m6[i][j]);
                }
           }

           for(i=0;i<3;i++)
           {
               for(j=0;j<3;j++)
                {
                    a7+=abs(mat[i][j]-m7[i][j]);
                }
           }

           for(i=0;i<3;i++)
           {
               for(j=0;j<3;j++)
                {
                    a8+=abs(mat[i][j]-m8[i][j]);
                }
           }

    //Taking the minimum of such amounts
     int t1 = min(a1,min(a2,a3));
     int t2 = min(a4,min(a5,a6));
     int t3 = min(a7,a8);
     sum = min(t1,min(t2,t3));
     cout<<sum;
}
