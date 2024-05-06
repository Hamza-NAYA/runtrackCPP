#include <iostream>

using namespace std;

struct Point {
    int x;
    int y;
};

int main(void) {
    Point point;

    Point *ptr_point;

    ptr_point = &point;

    ptr_point->x = 1;
    ptr_point->y = 2;

    cout << "Valeur de x : " << ptr_point->x << endl;
    cout << "Valeur de y : " << ptr_point->y << endl;

    return 0;
}
