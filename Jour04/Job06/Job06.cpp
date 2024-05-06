#include <iostream>

using namespace std;

int main(void) {
    int entier = 17;
    float flottant = 3.14;
    double reel = 123.345;
    const char* caractere = "La Plateforme";

    cout << "Adresse pour l'entier : " << &entier << ", Valeur : " << entier << endl;
    cout << "Adresse pour le flottant : " << &flottant << ", Valeur : " << flottant << endl;
    cout << "Adresse pour le reel : " << &reel << ", Valeur : " << reel << endl;
    cout << "Adresse pour le caractere : " << &caractere << ", Valeur : " << caractere << endl;

    return 0;
}
