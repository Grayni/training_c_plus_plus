#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Point {
public:
    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }

    int x, y;
};

int main() {

    vector<Point> arr1 {
        Point(1, 2),
        Point(2, 3),
        Point(4, 2)
    };

    vector<Point> arr2 {
            Point(1, 2),
            Point(2, 3),
            Point(4, 2)
    };

    bool result1 = equal(begin(arr1), end(arr1), begin(arr2), end(arr2), [](const Point &p1, const Point &p2) {
        return p1.x == p2.x && p2.y == p2.y;
    });
    cout << result1 << endl;




    return 0;
}