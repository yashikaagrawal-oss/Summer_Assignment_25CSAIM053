#include <stdio.h>

int main() {
    int arr[100], n, item;
    int low = 0, high, mid;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    printf("Enter elements of array(sorted):\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    printf("Enter item to search:\n");
    scanf("%d", &item);

    high = n - 1;

    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] == item) {
            printf("Element Found at position %d", mid + 1);
            return 0;
        }

        else if(arr[mid] < item)
            low = mid + 1;

        else
            high = mid - 1;
        
        
    }

    printf("Not Found");

    return 0;
}