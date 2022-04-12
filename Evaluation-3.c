#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct temple
{
    int data;
    struct temple *next;
}Node;

Node* create(int data)
{
    Node *temp;
    temp=(Node*)malloc(sizeof(Node));
    temp->data=data;
    temp->next=NULL;
    return temp;
}

void display(Node *start)
{
    Node *cur=start;
    if(start==NULL)
        printf("No devotees to worship.\n");
    else if(cur!=NULL)
    {
        printf("Remaining devotees: ");
            while(cur!=NULL)
        {
            printf("%d ",cur->data);
            cur=cur->next;
        }
        printf("\n");
    }
}

Node* add(Node *start,int data)
{
    Node *temp=create(data);
    if(start==NULL)
        start=temp;
    else
    {
        temp->next=start;
        start=temp;
    }
    return start;
}

Node* highest(Node *start)
{
    Node *cur=start,*prev=NULL;
    int max=start->data,flag=0;
    while(cur!=NULL)
    {
        if(cur->data>=max)
            max=cur->data;
    }
    cur=start;
    if(start->data==max)
    {
        cur=start;
        start=start->next;
        free(cur);
    }
    else
    {
             cur=start;
             while(cur!=NULL)
        {
            prev=cur;
            cur=cur->next;
            if(cur->data==max)
            {
                prev->next=cur->next;
                cur->next=NULL;
                free(cur);
                flag=1;
            }
                 if(flag==1)
                     break;
        }
    }

    printf("Allowed for worship:%d\n",max);
    return start;
}

int main()
{
    Node *start=NULL;
    int n,age;
    scanf("%d",&n);
    {
        for(int i=0;i<n;i++)
        {
            scanf("%d",&age);
            start=add(start,age);
        }
        start=highest(start);
        display(start);
    }
    return 0;
}
