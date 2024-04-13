#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    
    int n;
    int array[n];
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Factorials of the elements:\n");
    for (int i = 0; i < n; i++) {
        printf("Factorial of %d is %d\n", array[i], factorial(array[i]));
    }

    return 0;
}
