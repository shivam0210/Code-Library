#include <stdio.h>
#include <stdlib.h>

struct interview
{
    char name[30];
    char branch[30];
    char usn[30];
    int marks;
    float cgpa;
    struct interview *next;
};
typedef struct interview Interview;

Interview* create()
{
    Interview *temp;
    temp=(Interview*)malloc(sizeof(Interview));
    printf("Enter name\n");
    scanf("%s",&temp->name);
    printf("Enter branch\n");
    scanf("%s",&temp->branch);
    printf("Enter USN\n");
    scanf("%s",&temp->usn);
    printf("Enter CGPA of last semester\n");
    scanf("%f",&temp->cgpa);
    printf("Enter marks of round-1\n");
    scanf("%d",&temp->marks);
    temp->next=NULL;
}

Interview* insert(Interview *start)
{

    Interview *cur,*temp;
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

Interview* delete(Interview *start,int x)
{
    Interview *cur,*prev;
    if(start==NULL)
        printf("The list is empty\n");
    else
    {
        if(start->marks==x)
        {
          free(start);
          start=start->next;
        }
        else
        {
            cur=start;
            while((cur!=NULL)&&(cur->marks!=x))
            {
                prev=cur;
                cur=cur->next;
            }
            prev->next=cur->next;
            free(cur);
            cur->next=prev->next;
        }
    }
    return start;
}

Interview* round1(Interview *start)
{
    Interview *cur;
    int low;
    for(int i=0;i<3;i++)
    {
        cur=start;
        low=start->marks;
        while(cur!=NULL)
        {
            if(cur->marks<low)
                low=cur->marks;
                cur=cur->next;
        }
        start=delete(start,low);
    }
    return start;
}

Interview* round2(Interview *start)
{
    Interview *cur=start;
    while(cur!=NULL)
    {
        printf("Enter marks obtained in round 2\n");
        scanf("%d",&cur->marks);
        cur=cur->next;
    }
    for(int i=0;i<2;i++)
    {
        cur=start;
        int low=start->marks;
        while(cur!=NULL)
        {
            if(cur->marks<low)
                low=cur->marks;
                cur=cur->next;
        }
        start=delete(start,low);
    }
    return start;
}

Interview* display_final(Interview *start)
{
    Interview *cur;
    cur=start;
    int high;
    for(int i=0;i<2;i++)
    {
        cur=start;
        high=0;
        while(cur!=NULL)
        {
            if(high<cur->marks)
                high=cur->marks;
            cur=cur->next;
        }
        cur=start;
        while((cur!=NULL)&&(cur->marks!=high))
        cur=cur->next;
        if(i==0)
        {
            printf("The final list of selected students is:\n");
            printf("Name\tBranch\tUSN\tCGPA\tMarks\n");
        }
        printf("%s\t%s\t%s\t%f\t%d\n",cur->name,cur->branch,cur->usn,cur->cgpa,cur->marks);
        start=delete(start,high);
    }
    return start;
}

void display(Interview *start)
{
    Interview *cur=start;
    if(start==NULL)
        printf("The list is empty\n");
    else
    {
        printf("Name\tBranch\tUSN\tCGPA\tMarks\n");
        while(cur!=NULL)
        {
           printf("%s\t%s\t%s\t%f\t%d\n",cur->name,cur->branch,cur->usn,cur->cgpa,cur->marks);
           cur=cur->next;
        }
    }
}

int main()
{
    Interview *start=NULL;
    int ch;
    while(1)
    {
        printf("Enter your choice:\n1.Insert\n2.Round-1\n3.Round-2\n4.Display\n5.Display Final\n6.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:start=insert(start);
                    break;
            case 2:start=round1(start);
                    break;
            case 3:start=round2(start);
                    break;
            case 4:display(start);
                    break;
            case 5:start=display_final(start);
                    break;
            case 6:exit(0);
                    break;
            default: printf("Invalid choice\n");
        };
    }
    return 0;
}
