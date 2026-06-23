#include<stdio.h>
int main(){
    int arr[100],i,n,index=0;
    printf("Enter size of array:");
    scanf("%d",&n);

    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);}

    for(i=0;i<n;i++){
       if(arr[i]!=0){
       arr[index]=arr[i];
       index++;}
       }

    while(index<n){
        arr[index]=0;
        index++;
    }

    for(i=0;i<n;i++){
        printf("%d,",arr[i]);
    }
    return 0;
}
