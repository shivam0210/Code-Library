#include <stdio.h>
#include <math.h>

void read(float *a[],int n)
{
    for(int i=0;i<n;i++)
        scanf("%f",(a+i));
}

void merge(float *a[],float *b,int n)
{
    int j=0;
    for(int i=n;i<2*n;i++)
        {
            a[i]=b[j];
            j++;
        }
}

void select(float *a[],int n,int t)
{
    float t1;
    for(float i=0;i<n-1;i++)
    {
        for(float j=i+1;j<n;j++)
        {
            if(*(a+j)>*(a+i))
            {
                t1=*(a+j);
                *(a+j)=*(a+i);
                *(a+i)=t1;
            }
        }
    }
    printf("The Final Team is:\n");
    for(int i=0;i<t;i++)
        printf("%.1f ",*(a+i));
}

int main()
{
    float t1[100],t2[100];
    int n,t;
    float *ptr1=NULL;
    float *ptr2=NULL;
    printf("Enter the size of original teams and final team\n");
    scanf("%d%d",&n,&t);
    ptr1=&t1[0];
    ptr2=&t2[0];
    printf("Enter the heights in team 1\n");
    read(ptr1,n);
    printf("Enter the heights in team 2\n");
    read(ptr2,n);
    merge(ptr1,ptr2,n);
    select(ptr1,2*n,t);
    return 0;
}
