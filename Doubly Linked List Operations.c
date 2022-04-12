#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct song
{
    int sno;
    struct song *next;
    struct song *prev;
}Song;

Song *create(int data)
{
    Song *temp=(Song*)malloc(sizeof(Song));
    temp->sno=data;
    temp->next=NULL;
    temp->prev=NULL;
    return temp;
}

Song *add1(Song *start,int data)
{
    Song *temp=create(data);
        if(start==NULL)
        start=temp;
    else
    {
        Song* cur=start;
        while(cur->next!=NULL)
        {
            cur=cur->next;
        }
        cur->next=temp;
        temp->prev=cur;
    }
    return start;
}

Song *add2(Song *start,int data)
{
    Song *temp=create(data);
    if(start==NULL)
        start=temp;
    else
    {
        temp->next=start;
        start->prev=temp;
        start=temp;
    }
    return start;
}

Song *delete(Song *start)
{
    if(start==NULL)
        return start;
    else
    {
        Song *cur=start;
        while(cur->next!=NULL)
            cur=cur->next;
        Song *pre=cur->prev;
        pre->next=NULL;
        cur->prev=NULL;
        free(cur);
    }
    return start;
}

void display(Song *start)
{
    Song *cur=start;
    while(cur!=NULL)
    {
        printf("%d ",cur->sno);
        cur=cur->next;
    }
    printf("\n");
}

int main()
{
    int n,m,v;
    Song *start=NULL;
    scanf("%d",&n);
    if((n>=1)&&(n<=100))
    {
        for(int i=0;i<n;i++)
        {
            scanf("%d",&v);
            start=add1(start,v);
        }
        scanf("%d",&m);
        if(m<999)
            start=add2(start,m);
        start=delete(start);

        display(start);
    }
    return 0;
}
