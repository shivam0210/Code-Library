#include <stdio.h>
int main()
{
   int num[20];
   int *p;
   p=&num;
   printf("Enter the numbers\n");
   for(int i=0;i<10;i++)
   {
       scanf("%d",p+i);
   }
   for(int i=0;i<10;i++)
   {
       printf("%d\n",*(p+i));
   }
   return 0;
}
