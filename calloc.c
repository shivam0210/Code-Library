#include <stdio.h>
#include <stdlib.h>

void read(int *p,int n)
{
    printf("Enter the elements\n");
    for(int i=0;i<n;i++)
        scanf("%d",p+i);
}

void display(int *p,int n)
{
    printf("The elements of the array are :\n");
    for(int i=0;i<n;i++)
        printf("%d\n",*(p+i));
}

int sum(int *p,int n)
{
    int s=0;
    for(int i=0;i<n;i++)
    {
        s=s + *(p+i);
    }
    return s;
}

int main()
{
    int *p,n;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    p=(int *)calloc(n,sizeof(int));
    if(p==NULL)
        printf("Memory not allocated\n");
    else
    {
        read(p,n);
        display(p,n);
        printf("The sum of the elements is : %d\n",sum(p,n));
    }
}
