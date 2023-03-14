#include <iostream>

using namespace std;

struct Point {
    double x, y;
};

// Hàm trả về trung điểm của đoạn thẳng nối 2 điểm.
Point mid_point(const Point& p1, const Point& p2) {
    Point mid;
    mid.x = (p1.x + p2.x) / 2.0;
    mid.y = (p1.y + p2.y) / 2.0;
    return mid;
}

int main() {
    Point p1 = {0.0, 0.0};
    Point p2 = {1.0, 1.0};
    Point mid = mid_point(p1, p2);
    cout << "Trung diem cua (" << p1.x << ", " << p1.y << ") va ("
              << p2.x << ", " << p2.y << ") la: (" << mid.x << ", " << mid.y << ")\n";
    return 0;
}
