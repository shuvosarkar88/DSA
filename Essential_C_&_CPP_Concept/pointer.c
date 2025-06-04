#include <stdio.h>
#include <stdlib.h>

int main() {
    // int age = 21;
    // int *p = &age;
    int *heapMemory = (int *) malloc(5 * sizeof(int));
    heapMemory[0] = 10;
    heapMemory[1] = 15;
    heapMemory[2] = 20;
    heapMemory[3] = 25;
    heapMemory[4] = 30;

    // printf("%p\n", p);
    printf("heap memory %p to %p\n", heapMemory[0], heapMemory[4]);
    
    for (int i=0; i<5; i++) {
        printf("%d\n", heapMemory[i]);
    }

    free(heapMemory);
    return 0;
}