#include<stdio.h>
int main(){
    char str[100];
    int len=0,check=1,i;

    printf("Enter your string:");
    gets(str);
    while(str[len]!='\0'){
    len++;}
    for(i=0;i<len/2;i++){
        if(str[i]!=str[len-i-1]){
            check=0;
            break;
        }
    }
    if(check)
    printf("Palindrome");
    else
    printf("Not Palindrome");
    return 0;
}
