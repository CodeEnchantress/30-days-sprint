#include<stdio.h>

int main() {
    printf("Enter the size of the array: ");
    int n;
    scanf("%d", &n);

    printf("Enter the elements: ");
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the index for the number: ");
    int num_index;
    scanf("%d", &num_index);

    printf("Enter the number to insert: ");
    int num_value;
    scanf("%d", &num_value);

    
    for (int i = n; i > num_index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[num_index] = num_value;
    n++; 
    printf("Updated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
