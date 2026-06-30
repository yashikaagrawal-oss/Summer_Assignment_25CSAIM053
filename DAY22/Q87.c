#include<stdio.h>
int main(){
    char str[100],ch;
    int count=0,i;

    printf("Enter your string:");
    gets(str);
    printf("Enter character to check frequency:");
    scanf("%c",&ch);
    for(i=0;str[i]!='\0';i++){
        if(str[i]==ch)
        count++;
    }
    printf("%d",count);
    return 0;
}
