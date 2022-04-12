#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* p;
    p=(int*)malloc(5*sizeof(int));
    if(p==NULL)
    printf("No memory allocated\n");
    else
    printf("Memory allocated\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",p+i);
    }
     for(int i=0;i<5;i++)
    {
        printf("%d\n",*(p+i));
    }
    free(p);
    return 0;
}
