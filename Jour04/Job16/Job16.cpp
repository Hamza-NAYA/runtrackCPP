#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    const int size = 6;
    int tableau[size] = {11, 36, 78, 14, 51, 18};

    int max = *max_element(tableau, tableau + size);

    cout << "La valeur maximale du tableau est : " << max << endl;

    return 0;
}
