/******************************************************************************************************************
To Verify whether the input matrix is identity matrix.
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

 int check(int a[][100],int m,int n)
 {
     int flag=0;
     for(int i=0;i<m;i++)
     {
         for(int j=0;j<n;j++)
         {
             if((i==j)&&(a[i][j]==1))
             {
                 flag=0;
             }
             else if((i!=j)&&(a[i][j]==0))
             {
                 flag=0;
             }
             else if((i==j)&&(a[i][j]!=1))
             {
                 flag=1;
                 break;
             }
             else if((i!=j)&&(a[i][j]!=0))
             {
                 flag=1;
                 break;
             }
         }
         if(flag==1)
            break;
         else if(flag==0)
            continue;
     }
     return flag;
 }

 int main()
 {
     int a[100][100],m,n;
     printf("Enter size of the matrix.\n");
     scanf("%d%d",&m,&n);
     if(m==n)
     {
         read(a,m,n);
         printf("The matrix is :\n");
         display(a,m,n);
         int f=check(a,m,n);
         if(f==1)
            printf("The given matrix is not an identity matrix.\n");
         else if(f==0)
            printf("The given matrix is an identity matrix.\n");
     }
 }
