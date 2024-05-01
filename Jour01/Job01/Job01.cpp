#include <iostream>

using namespace std;

int main(void) {
    char c = '\x01';
    short int p = 10;

    int x = p + 3;
    int y = c + 1;
    short int z = p + c;
    int w = 3 * p + 5 * c;

    cout << "x = " << x << " (int)" << endl;
    cout << "y = " << y << " (int)" << endl;
    cout << "z = " << z << " (short int)" << endl;
    cout << "w = " << w << " (int)" << endl;

    return 0;
}
