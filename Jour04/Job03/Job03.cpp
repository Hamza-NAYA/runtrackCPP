#include <iostream>
#include <cstring>

using namespace std;

void inverseChaine(char *str) {
    int longueur = strlen(str);

    char *debut = str;
    char *fin = str + longueur - 1;

    while (debut < fin) {
        char temp = *debut;
        *debut = *fin;
        *fin = temp;

        debut++;
        fin--;
    }
}

int main(void) {
    const int size = 100;
    char str[size];

    cout << "Entrez une chaine de caracteres : ";
    cin.getline(str, size);

    inverseChaine(str);

    cout << "La chaine inversee est : " << str << endl;

    return 0;
}
