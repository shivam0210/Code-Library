#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct time
{
    int h,m,s;
}time;

typedef struct bank
{
    char sname[30],rname[30];
    char tid[30];
    float amt;
    time t;
}bank;

void read(bank *p,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("----------Enter details of transaction %d----------\n",i+1);
        printf("Enter Sender Name\n");
        scanf("%s",(p+i)->sname);
        printf("Enter Receiver Name\n");
        scanf("%s",(p+i)->rname);
        printf("Enter transaction id\n");
        scanf("%s",&(p+i)->tid);
        printf("Enter amount\n");
        scanf("%f",&(p+i)->amt);
        printf("Enter time in H:M:S format\n");
        scanf("%d%d%d",&(p+i)->t.h,&(p+i)->t.m,&(p+i)->t.s);
    }
}

void display(bank *p,int n)
{
        printf("TransID\tFrom\tTo\tAmount\tTime\n");
        for(int i=0;i<n;i++)
        printf("%s\t%s\t%s\t%0.2f\t%d:%d:%d\n",(p+i)->tid,(p+i)->sname,(p+i)->rname,(p+i)->amt,(p+i)->t.h,(p+i)->t.m,(p+i)->t.s);
}

void search(bank *p,int n)
{
    char c[30];
    int t=1,f=0;
    while(t==1)
    {
        printf("Enter the user name or transaction ID to display transaction details\n");
        scanf("%s",c);
        for(int i=0;i<n;i++)
        {
            if((strcmp((p+i)->rname,c)==0)||(strcmp((p+i)->sname,c)==0)||(strcmp((p+i)->tid,c)==0))
            {
                f++;
                if(f==1)
                printf("TransID\tFrom\tTo\tAmount\tTime\n");
                printf("%s\t%s\t%s\t%0.2f\t%d:%d:%d\n",(p+i)->tid,(p+i)->sname,(p+i)->rname,(p+i)->amt,(p+i)->t.h,(p+i)->t.m,(p+i)->t.s);
            }
        }
        if(f==0)
            printf("Search unsuccessful\n");
        printf("Enter 1 for more searches, enter 0 to exit\n");
        scanf("%d",&t);
    }
}

int main()
{
    bank *p;
    int n;
    printf("Enter number of transactions\n");
    scanf("%d",&n);
    p=(bank*)malloc(n*sizeof(bank));
    read(p,n);
    display(p,n);
    search(p,n);
    free(p);
    return 0;
}

