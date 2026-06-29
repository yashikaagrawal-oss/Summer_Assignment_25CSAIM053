#include<stdio.h>
int main(){
    char str[100],ch;
    int v=0,c=0,i;

    printf("Enter your string:");
    gets(str);
    for(i=0;str[i]!='\0';i++){
        ch=str[i];

        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        v++;}
        else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
        c++;}
    }
    printf("Vowels=%d\nConsonants=%d",v,c);
    return 0;
}