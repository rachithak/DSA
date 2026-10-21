#include<stdio.h>
struct student{
    int rollno;
    char name[20];
    float marks;
};
int main()
{
    struct student s1;
    printf("enter roll number,name and marks:\n");
    scanf("%d %s %f",&s1.rollno,&s1.name,&s1.marks);
    printf("student details");
    printf("name=%s\n",s1.name);
    printf("rollno=%d\n",s1.rollno);
    printf("marks=%.2f\n",s1.marks);
    return 0;
}