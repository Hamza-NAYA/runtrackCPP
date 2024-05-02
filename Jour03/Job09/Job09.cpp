#include <iostream>
#include <cstring>

using namespace std;

bool array_finder(const char* array1, const char* array2) {
    return strstr(array2, array1) != NULL;
}

int main(void) {
    const int size = 100;
    char arr1[size], arr2[size];

    cout << "Entrez la premiere chaine : ";
    cin.getline(arr1, size);

    cout << "Entrez la deuxieme chaine : ";
    cin.getline(arr2, size);

    if (array_finder(arr1, arr2)) {
        cout << "Vrai : La premiere chaine est incluse dans la deuxieme" << endl;
        return true;
    } else {
        cout << "Faux : La premiere chaine n'est pas incluse dans la deuxieme" << endl;
        return false;
    }

    return 0;
}
