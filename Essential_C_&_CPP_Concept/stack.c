#include <stdio.h>

void func2(int y) {
    int z = y + 10;
    printf("In func2: z = %d\n", z);
}

void func1(int x) {
    int y = x * 2;
    printf("In func1: y = %d\n", y);
    func2(y);
}

int main() {
    int a = 5;
    printf("In main: a = %d\n", a);
    func1(a);
    return 0;
}
