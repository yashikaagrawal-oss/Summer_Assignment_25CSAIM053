#include<stdio.h>
int main(){
    int a[10][10],sum=0,n,i,j;

    printf("Enter n:");
    scanf("%d",&n);
     
    printf("Enter elements of matrix A:");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<n;i++)
    sum+=a[i][i];
    printf("Sum of Diagonal Elements are= %d",sum);

    return 0;
}