#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "size of the array: ";
    cin >> n;

    int arr[n];

    for (int x: arr) {
        cout << x << endl;
    }
    
    return 0;
}