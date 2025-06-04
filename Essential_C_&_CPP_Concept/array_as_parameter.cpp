#include <iostream>
using namespace std;

void modifyArr(int arr[], int size) {
    for (int i=0; i<size; i++) {
        arr[i] *= 2;
    }
}

int main() {
    int myArr[] = {2, 5, 21, 1, -4, 33};
    int size = sizeof(myArr) / sizeof(int);

    modifyArr(myArr, size);

    for (int i=0; i<size; i++) {
        cout << myArr[i] << ", ";
    };
    cout << endl;
    
    return 0;
}