#include <stdio.h>
#include <stdlib.h>

struct student
{
    int rank;
    int appno;
    char name[30];
    char branch[30];
    char gen[30];
    char cat[30];
    struct student *next;
};
typedef struct student stud;

stud *create()
{
    stud *temp;
    temp=(stud *)malloc(sizeof(stud));
    printf("Enter the student data\n");
    printf("Enter rank of the student\n");
    scanf("%d",&temp->rank);
    printf("Enter the application number of the student\n");
    scanf("%d",&temp->appno);
    printf("Enter the name of the student\n");
    scanf("%s",&temp->name);
    printf("Enter the branch name of the student\n");
    scanf("%s",&temp->branch);
    printf("Enter the gender of the student\n");
    scanf("%s",&temp->gen);
    printf("Enter the category of the student\n");
    scanf("%s",&temp->cat);
    temp->next=NULL;
    return temp;
}

void display(stud *start)
{
    stud *cur=start;
    if(start==NULL)
        printf("No data available !!\n");
    else
    {
        printf("Rank\t AppNo\t Name\t Branch\t Sex\t Cat\n");
        while(cur!=NULL)
        {
            printf("%d\t %d\t %s\t %s\t %s\t %s\n",cur->rank,cur->appno,cur->name,cur->branch,cur->gen,cur->cat);
            cur=cur->next;
        }
    }
}

stud* insert_rank(stud *start)
{
    stud *cur,*temp,*t,*prev;
    cur=start;
    prev=start;
    temp=create();

    if((start->rank >= temp->rank)||(start==NULL))
        {
            temp->next=start;
            start=temp;
        }
    else
    {
        cur=start;
        prev=start;
        while((cur->next->rank < temp->rank)&&(cur->next!=NULL))
        {
            cur=cur->next;
        }
        if((cur->next==NULL)&&(cur->rank<temp->rank))
        {
            cur->next=temp;
        }
        else
        {
           temp->next=cur->next;
           cur->next=temp;
        }
    }
    return start;
}

stud* delete_rank(stud *start)
{
    stud *cur=start,*t;
    int p;
    if(start==NULL)
        printf("The list is empty\n");
    else
    {
        printf("Enter the rank of the student withdrawing\n");
        scanf("%d",&p);
        if(start->rank==p)
        {
            printf("The rank of the student withdrawing is: %d\n",start->rank);
            t=start->next;
            start->next=NULL;
            free(start);
            start=t;
        }
        else
        {
            while((cur->next->rank!=p)&&(cur->next!=NULL))
            cur=cur->next;
            if((cur->next==NULL)&&(cur->rank!=p))
                printf("Given rank not present\n");
            else
            {
                t=cur->next;
                cur->next=NULL;
                cur->next=t->next;
                printf("The rank of student withdrawing is: %d\n",cur->next->rank);
                free(cur->next->next);
            }
        }
    }
    return start;
}

int main()
{
    int ch;
    stud *start=NULL;
    while(1)
    {
        printf("Enter your choice\n1.Insert rank-wise\n2.Delete details of particular student details\n3.Display\n4.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1: start=insert_rank(start);
                break;
        case 2: start=delete_rank(start);
                break;
        case 3: display(start);
                break;
        case 4: exit(0);
                break;
        default: printf("Invalid choice\n");
        }
    }
    return 0;
}
