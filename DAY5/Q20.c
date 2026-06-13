#include<stdio.h>
int main(){
    int n,largestPrime=0;

    printf("Enter the number:");
    scanf("%d",&n);

for(int i=2;i<=n;i++){
    if(n%i==0){
        int isPrime=1;

        for(int j=2;j<i;j++){
            if(i%j==0){
                isPrime=0;
                break;
            }
        }
        if(isPrime)
        largestPrime=i;
    }
}
printf("Largest Prime Factor=%d",largestPrime);
return 0;
}