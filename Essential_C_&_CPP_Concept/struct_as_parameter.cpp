#include <iostream>
using namespace std;

struct Rectangle {
    int length;
    int breath;
};

int area(struct Rectangle &r1) {
    int area = r1.length * r1.breath;
    return area;
}

int main() {
    struct Rectangle r = {10, 5};
    printf("%d", area(r));
    
    return 0;
}