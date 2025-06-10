/* mathematically
    fact(0) = 1
*/ 


#include <stdio.h>

int fact(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    int result = fact(n);
    printf("Factorial of your natural number(%d) is: %d", n, result);
    
    return 0;
}
