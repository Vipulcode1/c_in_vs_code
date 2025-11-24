#include<stdio.h>
int main()
{
    int num,i;
    printf("enter an number:");
    scanf("%d",&num);
    i=1;
    while(i<=10)
    {
     printf("%d X %d = %d\n",num,i,num*i);
     i++;
    }

    printf("your table of %d is ready",num);
    return 0;
}
//write a c program to take integar input from the user and add then up .
// You should keep on taking input until a -1 is input