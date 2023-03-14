#include <iostream>
using namespace std;

struct Point {
    float x;
    float y;
};

void test_truyen_tham_tri(Point p) {
    cout << "Dia chi bien truyen vao trong ham truyen tham tri: " << &p << endl;
}

void test_truyen_tham_chieu(Point& p) {
    cout << "Dia chi bien truyen vao trong ham truyen tham chieu: " << &p << endl;
}

int main() {
    Point p = {1.0, 2.0};

    cout << "Dia chi bien truoc khi truyen tham tri: " << &p << endl;
    test_truyen_tham_tri(p);

    cout << "Dia chi bien truoc khi truyen tham chieu: " << &p << endl;
    test_truyen_tham_chieu(p);

    return 0;
}
