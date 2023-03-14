#include <iostream>

using namespace std;

struct Point {
    float x;
    float y;
};

void print(Point p) {
    cout << "(" << p.x << ", " << p.y << ")" << endl;
}

int main() {
    Point p1 = {1.0, 2.0};
    Point p2 = {3.5, -4.2};

    cout << "Point p1: ";
    print(p1);

    cout << "Point p2: ";
    print(p2);

    return 0;
}
