#include <stdio.h>
#include <string.h>
void countSpaces(char str[100],int t)
{
    int sp=0;
    for(int i=0;i<t;i++)
    if(str[i]==' ')
            sp++;


    printf("No. of white spaces = %d\n",sp);
    printf("No. of words = %d\n",sp+1);

}
void countSentences(char str[100],int t)
{
    int sen=0;
    for(int i=0;i<t;i++)
    if(str[i]=='.')
            sen++;

   printf("No. of sentences = %d\n",sen);
}
void countVowels(char str[100],int t)
{
    int v=0,c=0;
    for(int i=0;i<t;i++)
    if((str[i]=='a')||(str[i]=='A')||(str[i]=='e')||(str[i]=='E')||(str[i]=='i')||(str[i]=='I')||(str[i]=='o')||(str[i]=='O')||(str[i]=='u')||(str[i]=='U'))
            v++;
    else if(isalpha(str[i]))
            c++;
     printf("No. of vowels = %d\n",v);
    printf("No. of consonants = %d\n",c);
}
int main()
{
    char str[100],ch;
    int i,t,sen=0,v=0,c=0,sp=0;
    gets(str);
    puts(str);
    t=strlen(str);

    countSpaces(str,t);
    countSentences(str,t);
    countVowels(str,t);
}


/*
1.Write a modular C program to check no. of vowels, consonants and white spaces in a sentence.
2.Also perform word count and sentence count in a paragraph.
*/
