#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
    int data;
    struct stack *next;
}Stack;

Stack *create(int data)
{
    Stack *temp=(Stack*)malloc(sizeof(Stack));
    temp->data=data;
    temp->next=NULL;
    return temp;
}

void push(Stack **s,int data)
{
    Stack *temp=(Stack*)malloc(sizeof(Stack));
    temp->data=data;
    temp->next=NULL;
    if(*s==NULL)
        *s=temp;
    else
    {
        temp->next=*s;
        *s=temp;
    }
}

int isEmpty(Stack *s)
{
    return s==NULL;
}

int pop(Stack **s)
{
   if(!isEmpty(*s))
   {
       int x=(*s)->data;
       Stack *temp=(*s);
       (*s)=(*s)->next;
       temp->next=NULL;
       free(temp);
       return x;
   }
}

void display(Stack *s)
{
    if(s!=NULL)
    {
        while(s!=NULL)
        {
            printf("|%d|\n",s->data);
            s=s->next;
        }
    }
}

void inc(Stack *s,int f, int v)
{
    Stack *temp=s;
    while(f--)
        temp=temp->next;
    while(temp!=NULL)
    {
        temp->data=temp->data+1;
        temp=temp->next;
    }
}

int main()
{
   Stack *stack=NULL;
   int x,k,v,f;
   scanf("%d%d",&k,&v);
   push(&stack,8);
   push(&stack,10);
   push(&stack,12);
   push(&stack,14);
   push(&stack,15);
   f=5-k;
   inc(stack,f,v);
   display(stack);
   x=pop(&stack);
   display(stack);
   x=pop(&stack);
   display(stack);
   return 0;
}
