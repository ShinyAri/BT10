#include <iostream>

using namespace std;

struct Point {
    double x, y;
};

int main() {
    Point p = {3.5, 4.2};
    cout << "Dia chi cua p: " << &p << endl;
    cout << "Dia chi cua truong x cua p: " << &p.x << endl;
    cout << "Dia chi cua truong y cua p: " << &p.y << endl;

    return 0;
}
