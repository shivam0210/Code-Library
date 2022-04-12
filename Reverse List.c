#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *link;
}node;

node* create()
{
    node *temp;
    temp=(node*)malloc(sizeof(node));
    printf("Enter the data\n");
    scanf("%d",&temp->data);
    temp->link=NULL;
    return temp;
}

node *insert(node *start)
{
    node *temp;
    temp=create();
    if(start==NULL)
        start=temp;
    else
    {
        temp->link=start;
        start=temp;
    }
    return start;
}

void display(node *start)
{
    node *p=start;
    if(start==NULL)
        printf("The list is empty\n");
    else
    {
        while(p!=NULL)
    {
        printf("%d->",p->data);
        p=p->link;
    }
    printf("NULL\n");
    }
}

node *reverse(node *start)
{
    node *prev=NULL,*cur=start,*p;
    while(cur!=NULL)
    {
        p=cur->link;
        cur->link=prev;
        prev=cur;
        cur=p;
    }
    start=prev;
    return start;
}

void split(node *start)
{
    node *p,*q,*d,*e,*cur=start;
    p=start;
    q=start->link;
    d=p;
    e=q;
    int c=0;
    while(cur!=NULL)
    {
        if(c%2==0)
        {
            if(cur==start)
            p=start;
            else
            {
                p->link=cur;
                p=p->link;
            }
        }
        else if(c%2!=0)
        {
            if(cur==start->link)
                q=start->link;
            else
            {
                q->link=cur;
                q=q->link;
            }
        }
        c++;
        cur=cur->link;
    }
    p->link=NULL;
    q->link=NULL;
    display(d);
    display(e);
}

int main()
{
    int ch;
    node *start=NULL;
    while(1)
    {
        printf("Enter your choice\n1.Insert\n2.Reverse\n3.Display\n4.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1: start=insert(start);
                break;
        case 2: start=reverse(start);
                break;
        case 3: display(start);
                break;
        case 4: exit(0);
                break;
        case 5: split(start);
                break;
        default: printf("Invalid choice\n");
        }
    }
    return 0;
}

