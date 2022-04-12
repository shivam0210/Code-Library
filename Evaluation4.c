#include <stdio.h>
#include <math.h>
#include <stdlib.h>


void read_details()
{
    int a,b;
    char c;
    printf("Enter Type of Vehicle : F-Four Wheeler or T-Two Wheeler\n");
    scanf("%c",&c);
    printf("Enter Entering time.\n");
    scanf("%d",&a);
    printf("Enter Leaving time.\n");
    scanf("%d",&b);
    if(a>=b)
        exit (0);


    display_details(a,b,c);
    int f=b-a;
    calculate_charges(f,c);
}

void display_details(int a,int b,char c)
{
    printf("\nType of vehicle : ");
    if(c=='T')
        printf("Two Wheeler\n");
    else if(c=='F')
        printf("Four Wheeler\n");
    printf("Entering time : %d\nLeaving time : %d\nTotal time parked : %d\n",a,b,b-a);
}

void calculate_charges(int a,char b)
{
    int c;
    if(b=='T')
    {
        if(a<=8)
           c=c*10;
        else if(a>8)
        {
            a=a-8;
            c=8*10+a*20;
        }
        printf("Total parking charges are : Rs.%d\n",c);

    }
    else if(b=='F')
    {
        if(a<=8)
           c=c*20;
        else if(a>8)
        {
            a=a-8;
            c=8*20+a*30;
        }
        printf("Total parking charges are : Rs.%d\n",c);
    }
    else
    {
            printf("Wrong Input !\n");
    }
}

int main()
{
    int te,tl,tt,f;
    char t;
    read_details(te,tl,t);
    return 0;
}
