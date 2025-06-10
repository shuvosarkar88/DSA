#include <stdio.h>

int sumNatural(int n) {
    if (n <= 0) {
        return 0;
    }

    return n + sumNatural(n - 1);
}

int main() {
    int n;

    printf("Enter a natural number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    int result = sumNatural(n);
    printf("Sum of your natural number(%d) is: %d", n, result);
    
    return 0;
}