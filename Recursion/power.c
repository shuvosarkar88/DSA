#include <stdio.h>

long long power(long long m, int n) {
    if (n == 0) {
        return 1;
    }
    return m * power(m, n - 1);
}

int main() {
    long long r = power(10, 10);
    printf("Result: %lld\n", r);

    return 0;
}
