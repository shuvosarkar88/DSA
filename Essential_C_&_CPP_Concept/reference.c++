#include <iostream>
using namespace std;

int main() {
    int age = 21;
    int &r = age;

    cout << "age reference: " << r << " => " << &r << endl;
    
    return 0;
}