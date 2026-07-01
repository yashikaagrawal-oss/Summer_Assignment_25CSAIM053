#include<stdio.h>
int main(){
    char a[100],b[100];
    int i,j,len1=0,len2=0,count;

    printf("Enter first word:");
    gets(a);
    printf("Enter second word:");
    gets(b);
    while(a[len1]!='\0')
    len1++;
     while(b[len2]!='\0')
    len2++;

    if(len1!=len2){
        printf("Not Anagram");
        return 0;
    }
    for(i=0;a[i]!='\0';i++){
        count=0;
        for(j=0;b[j]!='\0';j++){
            if(a[i]==b[j])
            count++;
        }
        if(count==0){
            printf("Not Anagram");
            return 0;
        }
    }
    printf("Anagram");
    return 0;
}
