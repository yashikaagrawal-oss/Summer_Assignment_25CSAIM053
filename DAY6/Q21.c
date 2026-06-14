#include<stdio.h>
int main(){
    int n,binary[40],i=0,j;
    printf("Enter the Decimal number:");
    scanf("%d",&n);
    while(n>0){
        binary[i]=n%2;
        n=n/2;
        i++;}
    printf("Binary Number=");

    for(j=i-1;j>=0;j-- )
    printf("%d",binary[j]);

    return 0;
 }