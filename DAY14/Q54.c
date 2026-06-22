#include<stdio.h>
int main(){
    int arr[100],i,n,element,count=0;
    printf("Enter size of array:");
    scanf("%d",&n);

    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);}

    printf("Enter element for frequency:");
    scanf("%d",&element);

    for(i=0;i<n;i++){
        if(arr[i]==element)
        count++;
    }
    printf("Frequency=%d",count);
    return 0;
}
