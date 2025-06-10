#include <stdio.h>

int power(int m, int n) {
    if (n == 0) {
        return 1;
    }

    if (n%2 == 0) {
        return power(m*m, n/2);
    } else {
        return m * power(m*m, n/2);
    }
}

int main() {
    int r = power(5, 5);
    printf("%d", r);
    
    return 0;
}