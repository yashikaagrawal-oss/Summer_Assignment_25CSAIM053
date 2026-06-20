#include<stdio.h>
int isArmstrong(int n){
    int original=n,sum=0,digit;
    while(n!=0){
    digit=n%10;
    sum+=digit*digit*digit;
    n=n/10;
}
return original== sum;
}
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(isArmstrong(n))
    printf("Armstrong Number");
    else
    printf("Not a Armstrong Number");

    return 0;
    
}