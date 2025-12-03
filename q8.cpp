#include <iostream>
using namespace std;

class Area {
public:
    int area(int side) {
        return side * side;
    }

    int area(int length, int width) {
        return length * width;
    }

    float area(float radius) {
        return 3.14159 * radius * radius;
    }
};

int main() {
    Area a;
    cout << a.area(5) << endl;
    cout << a.area(4, 6) << endl;
    cout << a.area(3.5f) << endl;
    return 0;
}
