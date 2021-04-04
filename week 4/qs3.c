#include <stdio.h>
struct student
{
    char name[20];
    int roll;
} s[5];
int main()
{
    for (int i = 0; i < 5; i++)
    {
        printf("Enter details of student %d\n", i + 1);
        printf("Student name: ");
        scanf("%s", &s[i].name);
        printf("Student rollno: ");
        scanf("%s", &s[i].roll);
    }
    printf("The list of students: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("Student Name and rollno : %s %d\n", s[i].name, s[i].roll);
    }

    return 0;
}