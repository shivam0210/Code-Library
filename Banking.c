#include <stdio.h>
#include <stdlib.h>

typedef struct bank
{
    char name[30];
    int age;
    long int mob;
    long long int accno;
    char type[30];
}bank;

void read(bank *p,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("----------Enter details of account holder %d----------\n",i+1);
        printf("Enter Name\n");
        scanf("%s",(p+i)->name);
        printf("Enter age\n");
        scanf("%d",&(p+i)->age);
        printf("Enter type of account (savings/current)\n");
        scanf("%s",(p+i)->type);
        printf("Enter contact number\n");
        scanf("%ld",&(p+i)->mob);
        printf("Enter account number\n");
        scanf("%lld",&(p+i)->accno);
    }
}

void display(bank *p,int n)
{
        printf("Name\tAge\tType\tMob\tAcc.No.\n");
        for(int i=0;i<n;i++)
        printf("%s\t%d\t%s\t%ld\t%lld\n",(p+i)->name,(p+i)->age,(p+i)->type,(p+i)->mob,(p+i)->accno);
}

int main()
{
    bank *p;
    int n;
    printf("Enter number of account holders\n");
    scanf("%d",&n);
    p=(bank*)malloc(n*sizeof(bank));
    read(p,n);
    display(p,n);
    free(p);
    return 0;
}
