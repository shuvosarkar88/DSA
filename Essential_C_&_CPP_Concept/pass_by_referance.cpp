#include <iostream>
using namespace std;

// void swap(int *x, int *y) {
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }

void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 10;
    int b = 15;

    cout << "Before" << endl;
    cout << "a -> " << a << endl;
    cout << "b -> " << b << endl;

    // swap(&a, &b);
    // cout << endl;

    // cout << "After" << endl;
    // cout << "a -> " << a << endl;
    // cout << "b -> " << b << endl;


    swap(a, b);
    
    cout << "After" << endl;
    cout << "a -> " << a << endl;
    cout << "b -> " << b << endl;

    return 0;
};