#include<stdio.h>
int main()
{
    int start=310;
    int end=410;
    printf("the multiples of 40 between %d and %d:\n",start,end);
    for(int i=start;i<=end;i++){
        if(i%40==0){
            printf("%d\n",i);
        }
    }
    return 0;
}
