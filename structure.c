#include<stdio.h>
struct student
{
    char name[50];
    char gender;
    int age;

};
int main()
 {
    struct student s;
    printf("enter your name:");
    scanf("%[^\n]s",s.name);
    printf("enter your gender(m for male & f for female):");
    scanf(" %c",&s.gender);
    printf("enter your age:");
    scanf("%d",&s.age);
    printf("%s|%c|%d\n",s.name,s.gender,s.age);
    printf("%d\n",sizeof(s));
 }
