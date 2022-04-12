#include <stdio.h>
struct student_info
{
    char name[30];
    char course[30];
    char usn[30];
    int sem;
    float sgpa;
    char dept[30];
    char div;
};

struct student_info read(struct student_info s1)
{
    printf("Enter name of the student\n");
    gets(s1.name);
    printf("Enter the course name\n");
    scanf("%s",s1.course);
    printf("Enter the USN of the student\n");
    scanf("%s",s1.usn);
    printf("Enter the semester of the student\n");
    scanf("%d",&s1.sem);
    printf("Enter the division of the student\n");
    scanf(" %c",&s1.div);
    printf("Enter the department of the student\n");
    scanf("%s",s1.dept);
    printf("Enter the final SGPA of the student\n");
    scanf("%f",&s1.sgpa);
    return s1;
}

void print(struct student_info s1)
{
    printf("\n\n\n\nName of the student :\n");
    puts(s1.name);
    printf("Course registered :\n");
    puts(s1.course);
    printf("USN :\n");
    puts(s1.usn);
    printf("Semester :\n");
    printf("%d\n",s1.sem);
    printf("SGPA of semester %d :\n",s1.sem);
    printf("%.2f\n",s1.sgpa);
    printf("Department :\n");
    printf("%s\n",s1.dept);
    printf("Division :\n");
    printf("%c\n",s1.div);
}

int main()
{
    struct student_info s;
    s=read(s);
    print(s);
    return 0;
}
