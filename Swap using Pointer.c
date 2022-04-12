#include <stdio.h>
 void swap(int *a,int *b)
 {
     int t=*a;
     *a=*b;
     *b=t;
 }

 int main()
 {
     int a,b;
     printf("Enter 2 numbers\n");
     scanf("%d%d",&a,&b);
     printf("Befor Swapping\na=%d and b=%d",a,b);
     swap(&a,&b);
     printf("\nAfter Swapping\na=%d and b=%d",a,b);
 }
