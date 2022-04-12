/******************************************************************************************************************
To transpose the elements of a matrix.
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

 void transpose(int a[][100],int m,int n)
 {
     for(int i=0;i<n;i++)
        {
           for(int j=0;j<m;j++)
           printf("%d ",a[j][i]);
           printf("\n");
        }
 }
  int main()
 {
     int m,n,a[100][100];
     printf("Enter size of the matrix.\n");
     scanf("%d%d",&m,&n);
     read(a,m,n);
     printf("The original matrix is :\n");
     display(a,m,n);
     printf("The transposed matrix is :\n");
     transpose(a,m,n);
     return 0;
 }

