// wap to display student information
// The program is coded by Er Basanta Chaudhary#include<iostream>
using namespace std;

int main()
{
    struct student
    {
    char name[10];
    int roll_no;
    float marks;
    char remarks;
   } ;
struct student s;
printf("Enter the name:\t");
gets(s. name) ;
printf("Enter the roll_number:");
scanf("%d", &s. roll_no);
printf("Enter the marks:");
scanf("%f", &s. marks);
printf("Enter the remarks p for pass or f for fail\t:");
s. remarks=getchar();
printf("\n the student's information is\n ");
printf("\n student name\t\t roll_no\t\t marks\t reamrks");
printf("\n_ _ _ _ _ _ _ _ _ _ _ _ _\n");
printf("%s\t\t%d\t%2.f\%c",s. roll_no, s. marks, s. remarks );
 getchar() ;
return 0;
}