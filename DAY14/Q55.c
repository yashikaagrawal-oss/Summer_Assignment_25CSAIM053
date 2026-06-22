#include<stdio.h>
int main(){
    int arr[100],i,n,largest,sec_largest;
    printf("Enter size of array:");
    scanf("%d",&n);

    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);}

    largest=sec_largest=arr[0];

    for(i=0;i<n;i++){
        if(arr[i]>largest){
        sec_largest=largest;
        largest=arr[i];}

        else if(arr[i]>sec_largest && arr[i]!=largest)
        sec_largest=arr[i];
    }
    printf("Second Largest:%d",sec_largest);

    return 0;
}