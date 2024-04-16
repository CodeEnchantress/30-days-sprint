#include<stdio.h>
#include<stdbool.h>
int main() {
    int n, num;
    bool  flag = false; 
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number you want to search: ");
    scanf("%d", &num);

    for (int i = 0; i < n; i++) {
        if (num == arr[i]) {
            printf("Number found at index: %d\n", i);
            !flag;
            break; // Terminate the loop once the number is found
        }
    }

    if (flag == false) {
        printf("flag is %d\n", flag);
        printf("Number does not exist\n");

    }

    return 0;
}

 