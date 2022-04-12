#include <stdio.h>
 int main()
 {
     int a[100][100],b[100][100],c[100][100],m1,n1,m2,n2;
     printf("Enter size of first matrix.\n");
     scanf("%d%d",&m1,&n1);
     printf("Enter size of second matrix.\n");
     scanf("%d%d",&m2,&n2);
     if(n1==m2)
     {
     printf("Enter first matrix.\n");
     for(int i=0;i<m1;i++)
     {
         for(int j=0;j<n1;j++)
            scanf("%d",&a[i][j]);
     }
     printf("Enter second matrix.\n");
     for(int i=0;i<m2;i++)
     {
         for(int j=0;j<n2;j++)
            scanf("%d",&b[i][j]);
     }
     printf("First Matrix is :\n");
     for(int i=0;i<m1;i++)
     {
         for(int j=0;j<n1;j++)
            printf("%d ",a[i][j]);
            printf("\n");
     }
     printf("Second Matrix is :\n");
     for(int i=0;i<m2;i++)
     {
         for(int j=0;j<n2;j++)
            printf("%d ",b[i][j]);
            printf("\n");
     }
     int sum=0;

         for(int i=0;i<m1;i++)
         {

             for(int j=0;j<n2;j++)
             {
                for(int k=0;k<m2;k++)
                    sum=sum+a[i][k]*b[k][j];
                c[i][j]=sum;
                sum=0;
             }
         }
         printf("Product Matrix is :\n");
         for(int i=0;i<m1;i++)
         {
             for(int j=0;j<n2;j++)
                printf("%d ",c[i][j]);
             printf("\n");
         }
     }
     else
        printf("Matrices cannot be multiplied.\n");

 }
