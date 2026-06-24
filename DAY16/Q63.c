#include<stdio.h>
int main(){
    int arr[100],i,j,n,sum;
    printf("Enter size of array:");
    scanf("%d",&n);

    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);}

    printf("Enter sum: ");
    scanf("%d",&sum);

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
          if(arr[i]+arr[j]==sum)
          printf("%d,%d\n",arr[i],arr[j]);  
        }
    }

    return 0;
}