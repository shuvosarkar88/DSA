#include <iostream>
using namespace std;

class Rectangle {
    int length;
    int breath;

public:
    Rectangle(int l, int b) {
        length = l;
        breath = b;
    }
    
    void initialize(int l, int b) {
        length = l;
        breath = b;
    }

    int area () {
        return length*breath;
    }

    int perimeter () {
        return 2*(length*breath);
    }


};

int main() {
    Rectangle r = {0, 0};
    int l, b;
    
    cout << "enter length: ";
    cin >> l;
    cout << "enter breath: ";
    cin >> b;
    cout << endl;

    r.initialize(l, b);
    int a = r.area();
    int p = r.perimeter();

    cout << "area: " << a << endl << "perimeter: " << p << endl;
    return 0;
}