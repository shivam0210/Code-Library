#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct loot
{
    int mon;
    int hno;
    char name[30];
    struct loot *next;
}Loot;

Loot *create()
{
    Loot *temp=(Loot*)malloc(sizeof(Loot));
    int x,y;
    char z[30];
    temp->next=NULL;
    scanf("%d",&x);
   // scanf("%d",&y);
   // scanf("%s",&z);
    temp->mon=x;
   // temp->hno=y;
   // strcpy(temp->name,z);
    return temp;
}

void Insert_End(Loot **head)
{
    Loot *temp=create();
    if(*head==NULL)
        *head=temp;
    else
    {
        Loot *cur= *head;
        while(cur->next!=NULL)
            cur=cur->next;
        cur->next=temp;
    }
}

int Max_Loot(Loot *head)
{
    Loot *cur1=head, *cur2=head->next;
    int count1=0,count2=0;

    while(cur1!=NULL||cur2!=NULL)
    {
        if(cur1!=NULL)
        {
            count1=count1+cur1->mon;
            if((cur1->next!=NULL)&&(cur1!=NULL))
            {
                if(cur1->next->next)
                {if(cur1->next->next->mon>=cur1->next->next->next->mon)
                    cur1=cur1->next->next;
                else
                    cur1=cur1->next->next->next;}
                else
                    cur1=cur1->next->next;
            }

            else
            cur1=cur1->next;
        }
        if(cur2!=NULL)
        {
            count2=count2+cur2->mon;
            if((cur2->next!=NULL)&&(cur2!=NULL))
            {
                 if(cur2->next->next)
                 {if(cur2->next->next->mon>=cur2->next->next->next->mon)
                    cur2=cur2->next->next;
                else
                    cur2=cur2->next->next->next;}
                else
                    cur2=cur2->next->next;
            }
        }
    }

    if(count1>=count2)
        return count1;
    else if(count2>count1)
        return count2;
}

/*int Max_Loot(Loot *head)
{
    Loot *cur1=head, *cur2=head->next;
    int count1=0,count2=0;

    while(cur1!=NULL||cur2!=NULL)
    {
        if(cur1!=NULL)
        {
            count1=count1+cur1->mon;
            if(cur1->next!=NULL)
            cur1=cur1->next->next;
            else
            cur1=cur1->next;
        }
        if(cur2!=NULL)
        {
            count2=count2+cur2->mon;
            if(cur2->next!=NULL)
            cur2=cur2->next->next;
            else
            cur2=cur2->next;
        }
    }
    if(count1>=count2)
        return count1;
    else if(count2>count1)
        return count2;
}*/

int main()
{
    int n;
    Loot *head=NULL;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        Insert_End(&head);
    printf("%d\n",Max_Loot(head));
    return 0;
}
