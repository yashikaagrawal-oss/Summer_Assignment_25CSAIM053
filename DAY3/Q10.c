#include<stdio.h>
int main(){
    int start,end,i,j,isPrime;
     
    printf("Enter the start and end");
    scanf("%d%d",&start,&end);

    for(i=start;i<=end;i++){
        if(i<=1)
         continue;
        
        isPrime=1;

        for(j=2;j<i;j++){
            if(i%j==0){
                isPrime=0;
                break;
            }
        }

        if(isPrime)
         printf("%d\n",i);
    }
    return 0;
}