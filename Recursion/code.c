// #include <stdio.h>

// int fact(int n) {
//     if (n == 0) {
//         return 1;
//     } else {
//         return n * fact(n -1);
//     }
// }

// int main() {
//     int n = 4;

//     int fact_result = fact(n);
//     printf("factorial of %d is: %d", n, fact_result);


//     return 0;
// }

// **************************************************************************

#include <stdio.h>

int sum (int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + sum(n -1);
    }
}

int main() {
    int n = 10;

    int num_sum = sum(n);
    printf("sum of 0 to upto %d is: %d", n, num_sum);
    
    return 0;
}