#include<stdio.h>
int main(){
    int i,rows;
    
     printf("Enter number of rows:");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++){
        for(char ch='A';ch<'A'+i;ch++){
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}