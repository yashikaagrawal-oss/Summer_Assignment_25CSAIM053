#include<stdio.h>
int main(){
    int binary,digit,decimal=0,base=1;
    printf("Enter the binary number:");
    scanf("%d",&binary);

    while(binary>0){
        digit=binary%10;
        decimal+=digit*base;
        base*=2;
        binary/=10;
    }
    printf("Decimal Number=%d",decimal);
    
    return 0;
}