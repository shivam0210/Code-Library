/******************************************************************************************************************
To calculate y=m*x+c where y & m are matrices and c is an identity matrix
******************************************************************************************************************/

#include <stdio.h>

void read(int a[][100],int m,int n)
 {
     printf("Enter the elements of matrix m.\n");
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
 void calculate(int a[][100],int b[][100],int m,int n,int x)
 {
     for(int i=0;i<m;i++)
     {
         for(int j=0;j<n;j++)
         {
             b[i][j]=a[i][j]*x;
             if(i==j)
                b[i][j]++;
         }
     }
 }

  int main()
 {
     int m,n,a[100][100],b[100][100],x;
     printf("Enter size of the matrix.\n");
     scanf("%d%d",&m,&n);

     if(m==n)
     {
         printf("Enter the value of x.\n");
         scanf("%d",&x);
         read(a,m,n);
         printf("The original matrix is :\n");
         display(a,m,n);
         calculate(a,b,m,n,x);
         printf("The calculated matrix is :\n");
         display(b,m,n);
     }
     else
        printf("Cannot perform the operation.\n");

     return 0;
 }



