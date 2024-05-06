#include <iostream>

using namespace std;

int main(void) {
    int a = 1;
    int b = 2;
    int c = 3;

    int *ptr_a = &a;
    int *ptr_b = &b;
    int *ptr_c = &c;

    cout << "Valeurs initiales :" << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    *ptr_a = 10;
    *ptr_b = 20;
    *ptr_c = 30;

    cout << "Nouvelles valeurs :" << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    return 0;
}
