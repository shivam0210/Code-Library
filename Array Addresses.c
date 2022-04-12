#include <stdio.h>

void readarray(int *p,int n)
{
    for(int i=0;i<n;i++)
        scanf("%d",p+i);
}

void arrayaddress(int *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("At address %x ,data stored = %d\n",(p+i),*(p+i));
    }
}

void add(int *p,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
        sum=sum+*(p+i);
    printf("Sum of all th elements of the array = %d\n",sum);
}
int* largest(int *p,int n)
{
    int *l=p;
    for(int i=0;i<n;i++)
    {
        if(*(p+i)>*l)
            {
               l=p+i;
            }
    }
    return l;
}

void reverse(int *p,int n)
{
    printf("The array in reverse order is:\n");
    for(int i=n-1;i>=0;i--)
        printf("%d ",*(p+i));
    printf("\n");
}

int main()
{
    int a[10],n;
    int *ptr=NULL;
    ptr=&a[0];
    printf("Enter no. of elements\n");
    scanf("%d",&n);
   printf("Enter the elements\n");
    readarray(ptr,n);
    arrayaddress(ptr,n);
    add(ptr,n);
    int*o=largest(ptr,n);
    printf("Largest element is %d at address %x\n",*o,o);
    reverse(ptr,n);
}
