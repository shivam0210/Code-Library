#include <stdio.h>
#include <stdlib.h>

struct student
{
    int year;
    int pyear;
    long int package;
    char name[30];
    char cname[30];
    char branch[30];
    struct student *next;
};
typedef struct student stud;

stud *create()
{
    stud *temp;
    temp=(stud *)malloc(sizeof(stud));
    printf("Enter the student data\n");
    printf("Enter the name of the student\n");
    scanf("%s",&temp->name);
    printf("Enter the branch of the student\n");
    scanf("%s",&temp->branch);
    printf("Enter the company name\n");
    scanf("%s",&temp->cname);
    printf("Enter package offered to the student\n");
    scanf("%ld",&temp->package);
    printf("Enter the passed out year of the student\n");
    scanf("%d",&temp->year);
    printf("Enter the placement year of the student\n");
    scanf("%d",&temp->pyear);
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
        printf("Name\t Branch\t Company\t Package\t PassOut\t PlaceYear\n");
        while(cur!=NULL)
        {
            printf("%s\t %s\t %s\t %ld\t %d\t %d\n",cur->name,cur->branch,cur->cname,cur->package,cur->year,cur->pyear);
            cur=cur->next;
        }
    }
}

stud* insert_end(stud *start)
{
    stud *cur,*temp,*t,*prev;
    cur=start;
    temp=create();

    if(start==NULL)
        start=temp;
    else
    {
        if(start->next==NULL)
            start->next=temp;
        else
        {
            cur=start;
            while(cur->next!=NULL)
                cur=cur->next;
            cur->next=temp;
        }
    }
    return start;
}

void display_placed_yr(stud *start)
{
    stud *cur=start;
    if(start==NULL)
        printf("The list is empty\n");
    else
    {
        int c=-1;
        cur=start;
        while(cur!=NULL)
        {
            if(cur->pyear==2019)
            {
                c++;
                if(c==0)
                   {
                       printf("The students placed in 2019 are:\n");
                       printf("Name\t Branch\t Company\t Package\t PassOut\t PlaceYear\n");
                   }
                 printf("%s\t %s\t %s\t %ld\t %d\t %d\n",cur->name,cur->branch,cur->cname,cur->package,cur->year,cur->pyear);
            }
            cur=cur->next;
        }
        if(c==-1)
            printf("No student is placed in 2019\n");
    }
}

void display_highest(stud *start)
{
    int high=0;
    stud *cur;
    if(start==NULL)
        printf("The list is empty\n");
    else
    {
        cur =start;
        while(cur!=NULL)
        {
            if(cur->package>=high)
            {
                high=cur->package;
            }
            cur=cur->next;
        }
        cur=start;
        int c=-1;
        while(cur!=NULL)
        {
            if(cur->package==high)
            {
                c++;
                if(c==0)
                   {
                       printf("The highest package is:\n");
                       printf("Name\t Branch\t Company\t Package\t PassOut\t PlaceYear\n");
                   }
                 printf("%s\t %s\t %s\t %ld\t %d\t %d\n",cur->name,cur->branch,cur->cname,cur->package,cur->year,cur->pyear);
            }
            cur=cur->next;
        }
    }
}

int main()
{
    int ch;
    stud *start=NULL;
    while(1)
    {
        printf("Enter your choice\n1.Insert end\n2.Display student details\n3.Display List of students placed in 2019\n4.Display Highest package offered\n5.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1: start=insert_end(start);
                break;
        case 2: display(start);
                break;
        case 3: display_placed_yr(start);
                break;
        case 4: display_highest(start);
                break;
        case 5: exit(0);
                break;
        default: printf("Invalid choice\n");
        };1
    }
    return 0;
}
