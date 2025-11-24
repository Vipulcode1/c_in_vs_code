#include<stdio.h> 
int main()
{
    int num;
    int sum=0;
    
    do{
        printf("enter a num:");
    scanf("%d",&num);
        sum=sum+num;
    }
    while(num!=-1);

    printf("%d",sum);

    return 0;

}