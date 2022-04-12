#include <stdio.h>

typedef struct hotel
{
    char name[30];
    char address[30];
    char grade;
    int num;
    float charges;
}hotel;

void read(hotel h[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Enter details of hotel %d\n",i+1);
        printf("Enter the name of the hotel\n");
        fflush(stdin);
        scanf("%[^\n]s",h[i].name);
        fflush(stdin);
        printf("Enter the address of the hotel\n");
        scanf("%[^\n]s",h[i].address);
        fflush(stdin);
        printf("Enter the grade category of the hotel\n");
        scanf("%c",&h[i].grade);
        fflush(stdin);
        printf("Enter number of rooms in  the hotel\n");
        scanf("%d",h[i].num);
        fflush(stdin);
        printf("Enter the charges per room\n");
        scanf("%f",&h[i].charges);
        fflush(stdin);
    }
}

void display(hotel h[],int n)
{
    printf("Name\tAddress\tGrade\tRooms\tCharges\n");
    for(int i=0;i<n;i++)
    printf("%s\t%s\t%c\t%d\t%.2f\n",h[i].name,h[i].address,h[i].grade,h[i].num,h[i].num,h[i].charges);
}

void search(hotel h[],int n)
{
    char c;
    printf("\n\nEnter the grade category of hotels to be displayed\n");
    scanf("%c",&c);
    for(int i=0;i<n;i++)
    {
        if(h[i].grade==c)
        {
            printf("%s\n",h[i].name);
        }
    }
}

void charge(hotel h[],int n)
{
    float f;
    printf("Enter the room charges below which hotels are to be listed\n");
    scanf("%f",&f);
    printf("The hotels below the mentioned price rate are\n");
    for(int i=0;i<n;i++)
    {
        if(h[i].charges<f)
        printf("%s\n",h[i].name);
    }
}

int main()
{
    hotel h[100];
    int n;
    printf("Enter the number of hotels\n");
    scanf("%d",&n);
    read(h,n);
    display(h,n);
    search(h,n);
    charge(h,n);
    return 0;
}
