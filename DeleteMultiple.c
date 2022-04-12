#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

node* create()
{
    node *temp;
    temp=(node*)malloc(sizeof(node));
    printf("Enter the data\n");
    scanf("%d",&temp->data);
    temp->next=NULL;
    return temp;
}

node* insert_end(node *start)
{
    node *cur,*temp;
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

node* delete_multiple(node *start)
{
    node *cur,*p,*prev;
    int x;
    if(start==NULL)
        printf("The list is empty\n");
    else
    {
        printf("Enter the element to be deleted\n");
        scanf("%d",&x);
        if((start->data==x)&&(start->next==NULL))
        {
           printf("The deleted element is %d\n",start->data);
           p=start;
           start=start->next;
           free(p);
        }
        while(cur!=NULL)
           {
              while((cur!=NULL)&&(cur->data!=x))
            {
                prev=cur;
                cur=cur->next;
            }
                if(cur==NULL)
                return start;
                    printf("The deleted element is %d\n",cur->data);
                    prev->next=cur->next;
                    free(cur);
                    cur=prev->next;
           }
    }
    return start;
 }

void display(node *start)
{
    node *cur=start;
    if(start==NULL)
        printf("The list is empty\n");
    else
    {
        while(cur!=NULL)
        {
            printf("%d->",cur->data);
            cur=cur->next;
        }
        printf("NULL\n");
    }
}

int main()
{
    node *start=NULL;
    int ch;
    while(1)
    {
        printf("Enter choice:\n1.Insert End\n2.Delete Multiple\n3.Display\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:start=insert_end(start);
                    break;
            case 2:start=delete_multiple(start);
                    break;
            case 3:display(start);
                    break;
            case 4:exit(0);
                    break;
            default:printf("Invalid choice\n");
        };
    }
    return 0;
}
