#include<stdio.h>
int main()
{
    int x,y,ans=1;
    // x=7;
    // y=5;
    printf("enter the value of base and exp:");
    scanf("%d%d",&x,&y);
    while(y>0){
         ans= ans*x;
        y--;
    }
    printf("answer %d\n",ans);
    return 0;
}
