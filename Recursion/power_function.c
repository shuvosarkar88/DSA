#include <stdio.h>

// Optimized recursive power function using exponentiation by squaring
// Time complexity: O(log n) instead of O(n)
int power_fast(int base, int exp) {
    // Base cases
    if (exp == 0) return 1;
    if (exp == 1) return base;
    
    // If exponent is even: base^exp = (base^(exp/2))^2
    if (exp % 2 == 0) {
        int half_power = power_fast(base, exp / 2);
        return half_power * half_power;
    }
    // If exponent is odd: base^exp = base * base^(exp-1)
    else {
        return base * power_fast(base, exp - 1);
    }
}

// Iterative version - more memory efficient
int power_iterative(int base, int exp) {
    if (exp == 0) return 1;
    
    int result = 1;
    int current_base = base;
    
    while (exp > 0) {
        // If exp is odd, multiply result by current_base
        if (exp % 2 == 1) {
            result *= current_base;
        }
        // Square the base and halve the exponent
        current_base *= current_base;
        exp /= 2;
    }
    
    return result;
}

// Handle negative exponents and edge cases
double power_complete(double base, int exp) {
    if (exp == 0) return 1.0;
    if (base == 0) return 0.0;
    
    // Handle negative exponents
    if (exp < 0) {
        return 1.0 / power_complete(base, -exp);
    }
    
    // Use fast exponentiation for positive exponents
    if (exp % 2 == 0) {
        double half = power_complete(base, exp / 2);
        return half * half;
    } else {
        return base * power_complete(base, exp - 1);
    }
}

int main() {
    int base = 5, exponent = 5;
    
    printf("Original method: %d^%d = %d\n", 
           base, exponent, power_fast(base, exponent));
    
    printf("Iterative method: %d^%d = %d\n", 
           base, exponent, power_iterative(base, exponent));
    
    printf("Complete method: %.0f^%d = %.0f\n", 
           (double)base, exponent, power_complete(base, exponent));
    
    // Test with negative exponent
    printf("Negative exponent: 2^(-3) = %.3f\n", 
           power_complete(2.0, -3));
    
    return 0;
}


// simple version
int power(int m, int n) {
    if (n == 0) {
        return 1;
    }
    return m * power(m, n - 1);
}

int main() {
    int r = power(5, 5);
    printf("%d ", r);
    
    return 0;
}
