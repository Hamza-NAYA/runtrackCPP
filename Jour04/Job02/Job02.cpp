#include <iostream>

using namespace std;

int main(void) {
    int a = 1;
    int b = 2;

    cout << "Avant l'echange : a = " << a << ", b = " << b << endl;

    int *ptr_a = &a;
    int *ptr_b = &b;

    int temp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = temp;

    cout << "Apres l'echange : a = " << a << ", b = " << b << endl;

    return 0;
}
