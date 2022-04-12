/******************************************************************************************************************
To find the triangular sum of elements in a matrix.
******************************************************************************************************************/

#include <stdio.h>

void read(int a[][100],int m,int n)
 {
     printf("Enter the matrix elements.\n");
     for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
        scanf("%d",&a[i][j]);
 }

 void display(int a[][100],int m,int n)
 {
     for(int i=0;i<m;i++)
        {
           for(int j=0;j<n;j++)
           printf("%d ",a[i][j]);
           printf("\n");
        }
 }

 void sum(int a[][100],int m,int n)
 {
     int s1=0,s2=0,s3=0;
     for(int i=0;i<m;i++)
     {
         s3=s3+a[i][i];
         for(int j=0;j<i;j++)
            s1=s1+a[i][j];
     }
     for(int i=0;i<m;i++)
     {
         for(int j=i+1;j<n;j++)
            s2=s2+a[i][j];
     }
     printf("Lower Triangle Sum = %d\n",s1);
     printf("Upper Triangle Sum = %d\n",s2);
     printf("Diagonal elements Sum = %d\n",s3);
 }

 int main()
 {
     int m,n,a[100][100];
     printf("Enter size of the matrix.\n");
     scanf("%d%d",&m,&n);
     read(a,m,n);
     display(a,m,n);
     sum(a,m,n);
     return 0;
 }
