#include<stdio.h>
int main(){
    int arr[100],i,n,element;
    printf("Enter size of array:");
    scanf("%d",&n);

    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);}

    printf("Enter element to search:");
    scanf("%d",&element);

    for(i=0;i<n;i++){
        if(arr[i]==element){
        printf("Element found at position %d",i+1);
        break;}    
    }
    if(i==n)
    printf("Element Not Found");

    return 0;
}
