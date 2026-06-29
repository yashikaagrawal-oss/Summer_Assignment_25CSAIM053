#include<stdio.h>
int main(){
    char str[100];
    int len=0;

    printf("Enter your string:");
    gets(str);

    while(str[len]!='\0'){
    len++;}

    printf("length=%d",len);
    return 0;
}