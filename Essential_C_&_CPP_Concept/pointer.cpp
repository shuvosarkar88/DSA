#include <iostream>
using namespace std;

int main() {
    // char name[20] = "shuvo sarkar";
    // int age = 21;
    // char *pName = name;
    // int *pAge = &age;

    // cout << name << ", pointer => " << static_cast<void*>(pName) << endl;
    // cout << "age: " << age << ", Pointer => " << pAge << endl;

    // int *marks = new int;
    // *marks = 22;
    int *arr = new int[5]; 

    for (int i=0; i<5; i++) {
        arr[i] = i*10;
    };
    for (int i=0; i<5; i++) {
        cout << arr[i] << " (addr: " << (arr + i) << ") " << endl;
    };
    cout << endl;

    // cout << *marks << " in memory => " << marks << endl; 

    // delete marks;
    delete arr;
    return 0;
}