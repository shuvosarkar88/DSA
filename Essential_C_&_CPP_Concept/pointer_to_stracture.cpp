#include <stdio.h>
#include <iostream>
using namespace std;

struct Rectangle {
    int length;
    int breath;
};


int main() {
    // Rectangle r = {10, 5};  // struct not mandatory in c++
    // cout << r.length << endl;
    // cout << r.breath << endl;

    // cout << "---------------" << endl;

    // Rectangle *p = &r;
    // cout << p->length << endl;
    // cout << p->breath << endl;

    
    Rectangle *p;
    // p = new Rectangle; // c++
    p = (struct Rectangle *)malloc(sizeof(struct Rectangle));  // c

    p->length = 10;
    p->breath = 5;

    cout << p->length << endl;
    cout << p->breath << endl;

    free(p);
    return 0;
}