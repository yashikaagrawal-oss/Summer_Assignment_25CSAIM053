#include<stdio.h>
int main(){
    int arr[100],i,j,n;
    printf("Enter size of array:");
    scanf("%d",&n);

    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);}

    printf("Duplicates:");

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){

            if(arr[i]==arr[j]){
                printf("%d",arr[i]);
            }
        }
         
    }
    return 0;
}