#include <iostream>
#include <cstring>

using namespace std;

int main(void) {
    const int size = 100;
    char arr1[size];
    char arr2[size];

    cout << "Entrez une phrase : ";
    cin.getline(arr1, size);

    cout << "Entrez une phrase : ";
    cin.getline(arr2, size);

    if (strcmp(arr1, arr2) == 0) {
        cout << "Les chaines sont identiques" << endl;
        return 0;
    } else {
        cout << "Les chaines ne sont pas identique" << endl;
        return 1;
    }
    return 0;
}