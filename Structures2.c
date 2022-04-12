#include <stdio.h>
struct student_info
{
    char name[30];
    char course[30];
    char usn[30];
    int sem;
    int m[5];
    int asg[2];
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
    printf("Enter marks in 5 evaluations\n");
    scanf("%d%d%d%d%d",&s1.m[0],&s1.m[1],&s1.m[2],&s1.m[3],&s1.m[4]);
    printf("Enter marks of 2 assignments\n");
    scanf("%d%d",&s1.asg[0],&s1.asg[1]);
    return s1;
}
float compute(int m[],int asg[])
{
    float r;
    r=(((m[0]+m[1]+m[2]+m[3]+m[4])*0.1)+((asg[0]+asg[1])*0.25));
    r=r/10;
    return r;
}

void print(struct student_info s1)
{
    float sgpa;
    printf("\n\n\n\nName of the student :\n");
    puts(s1.name);
    printf("Course registered :\n");
    puts(s1.course);
    printf("USN :\n");
    puts(s1.usn);
    printf("Semester :\n");
    printf("%d\n",s1.sem);
    printf("Department :\n");
    printf("%s\n",s1.dept);
    printf("Division :\n");
    printf("%c\n",s1.div);
    sgpa=compute(s1.m,s1.asg);
    printf("SGPA = %0.2f",sgpa);
}

int main()
{
    struct student_info s;
    s=read(s);
    print(s);
    return 0;
}

