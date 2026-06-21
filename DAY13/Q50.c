#include<stdio.h>
int main(){
    int arr[100],i,n,sum=0;
    float avg;
    printf("Enter size of array:");
    scanf("%d",&n);

    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);}

    for(i=0;i<n;i++){
        sum+=arr[i];
    }
    avg=(float)sum/n;
    printf("SUM=%d\n",sum);
     printf("AVERAGE=%.2f",avg);


    return 0;
}