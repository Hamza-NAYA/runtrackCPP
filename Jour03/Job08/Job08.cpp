#include <iostream>
#include <cstring>

using namespace std;

int main(void) {
    const int size = 100;
    char tab[size];
    char input[size];

    cout << "Entrez une chaine de caracteres : ";
    cin.getline(input, size);

    strcpy(tab, input);

    cout << "Les caracteres dans le tableau sont : ";
    for (int i = 0; tab[i] != '\0'; ++i) {
        cout << tab[i] << ", ";
    }

    return 0;
}
