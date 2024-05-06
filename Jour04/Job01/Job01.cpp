#include <iostream>

using namespace std;

int main(void) {
    int number = 2019;

    int *ptr = &number;

    cout << "La valeur de 'number' est : " << *ptr << endl;

    return 0;
}
