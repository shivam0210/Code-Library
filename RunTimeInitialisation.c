#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct player
{
    char name[50];
    int age;
    char team[20];
    float avg;
    int rank;
    int high,hund,fif,sum;
}plr;

void read(plr *p,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("----------Enter details of player %d----------\n",i+1);
        printf("Enter Name\n");
        scanf("%s",(p+i)->name);
        printf("Enter age\n");
        scanf("%d",&(p+i)->age);
        printf("Enter team\n");
        scanf("%s",(p+i)->team);
        printf("Enter average\n");
        scanf("%f",&(p+i)->avg);
        printf("Enter ODI rank\n");
        scanf("%d",&(p+i)->rank);
        printf("Enter highest score\n");
        scanf("%d",&(p+i)->high);
        printf("Enter no. of hundreds\n");
        scanf("%d",&(p+i)->hund);
        printf("Enter no. of fifties\n");
        scanf("%d",&(p+i)->fif);
        (p+i)->sum=(p+i)->hund+(p+i)->fif;
    }
}
void display(plr *p,int n)
{
    printf("Name\tAge\tTeam\tAvg\tRank\tHS\t100s\t50s\t100s+50s\n");
    for(int i=0;i<n;i++)
    printf("%s\t%d\t%s\t%.2f\t%d\t%d\t%d\t%d\t%d\n",(p+i)->name,(p+i)->age,(p+i)->team,(p+i)->avg,(p+i)->rank,(p+i)->high,(p+i)->hund,(p+i)->fif,(p+i)->sum);
}

void high(plr *m,int n)
{
    int t,max=*(m+0);
    for(int i=0;i<n;i++)
    {
        if((m+i)->hund>max)
        {
            max=(m+i)->hund;
            t=i;
        }
    }
    printf("\n\nThe highest no. of hundreds is scored by\n");
    printf("Name\tAge\tTeam\tAvg\tRank\tHS\t100s\t50s\t100s+50s\n");
    printf("%s\t%d\t%s\t%.2f\t%d\t%d\t%d\t%d\t%d\n",(m+t)->name,(m+t)->age,(m+t)->team,(m+t)->avg,(m+t)->rank,(m+t)->high,(m+t)->hund,(m+t)->fif,(m+t)->sum);

}

void search(plr *m,int n)
{
    char c[30];
    int t=-1;
    printf("\n\nEnter the player's name to be searched\n");
    scanf("%s",c);
    for(int i=0;i<n;i++)
    {
        if(strcmp((m+i)->name,c)==0)
            t=i;
        else
            t=-1;
    }
    if(t>=0)
    {
        printf("\n\nThe mentioned player details are\n");
        printf("Name\tAge\tTeam\tAvg\tRank\tHS\t100s\t50s\t100s+50s\n");
        printf("%s\t%d\t%s\t%.2f\t%d\t%d\t%d\t%d\t%d\n",(m+t)->name,(m+t)->age,(m+t)->team,(m+t)->avg,(m+t)->rank,(m+t)->high,(m+t)->hund,(m+t)->fif,(m+t)->sum);
    }
    else if(t==-1)
    printf("The player is not found !!\n");
}

int main()
{
    plr *ptr;
    int n,u;
    printf("Enter no. of players\n");
    scanf("%d",&n);
    ptr=(plr*)malloc(n*sizeof(plr));
    read(ptr,n);
    display(ptr,n);
    high(ptr,n);
    search(ptr,n);
    free(ptr);
    return 0;
}
