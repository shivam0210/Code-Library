#include <stdio.h>
#include <math.h>

int main()
{
    int svCalc,phy,mech,ele,si,pLab,cLab;   //Total names of the subjects in our curriculum
    int c1,c2,c3,c4,c5,c6,c7;  //Total credits of the subjects in our curriculum
    char grade;

    printf("Grades obtained in different subjects signifies Grade Point as:\nS=10.0\nA=9.0\nB=8.0\nC=7.0\nD=6.0\nE=5.0\nF=0.0\n");

    //Taking grade points and credits scored in all the subjects from the user

    printf("Enter grade point and credits obtained in Single Variable Calculus\n");
    scanf("%d%d",&svCalc,&c1);
    printf("Enter grade point and credits obtained in Engineering Physics\n");
    scanf("%d%d",&phy,&c2);
    printf("Enter grade point and credits obtained in Engineering Mechanics\n");
    scanf("%d%d",&mech,&c3);
    printf("Enter grade point and credits obtained in Basic Electrical Engg\n");
    scanf("%d%d",&ele,&c4);
    printf("Enter grade point and credits obtained in Social Innovation\n");
    scanf("%d%d",&si,&c5);
    printf("Enter grade point and credits obtained in Physics Lab\n");
    scanf("%d%d",&pLab,&c6);
    printf("Enter grade point and credits obtained in C Programming for Problem Solving\n");
    scanf("%d%d",&cLab,&c7);

    total_credit_hours=c1+c2+c3+c4+c5+c6+c7;
    int total_GP=(svCalc*c1)+(phy*c2)+(mech*c3)+(ele*c4)+(si*c5)+(pLab*c6)+(cLab*c7);
    float cgpa=total_GP/total_credit_hours;

    if(cgpa==10)
       grade='S';
    else if((cgpa<10)&&(cgpa>=9))
       grade='A';
    else if((cgpa<9)&&(cgpa>=8))
       grade='B';
    else if((cgpa<8)&&(cgpa>=7))
        grade='C';
    else if((cgpa<7)&&(cgpa>=6))
        grade='D';
    else if((cgpa<6)&&(cgpa>=5))
        grade='E';
    else if(cgpa<5)
        grade='F';

        printf("Your CGPA is %.2f and your grade is %c",cgpa,grade);  //Displaying the result

        return 0;
}
