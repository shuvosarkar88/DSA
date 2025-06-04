#include <stdio.h>

struct Rectangle {
    int length;
    int breath;
    char x; // this will also take 4 bytes for convenience
};

int main() {
    struct Rectangle r = {5, 6};

    printf("size in bytes: %d\n", sizeof(r));
    printf("area of rectangle: %d\n", r.length * r.breath);
    
    return 0;
}