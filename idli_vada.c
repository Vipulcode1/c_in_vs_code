#include<stdio.h>
int main()
{
    int idli,vada,num,start,end;
    printf("enter a start and end:");
    scanf("%d %d",&start,&end);
    for(int i=start;i<=end;i++)
    {
        if(i%3==0 && i%5==0){
            printf("idli-vade\n");
        }else if(i%3==0){
            printf("idli\n");
        }else if(i%5==0){
            printf("vade\n");

    } else{
        printf("%d\n",i);
    }}
      return 0;

    
    

}
