#include <iostream>
#include <string>

using namespace std;

int main(void) {

    int entier = 2019;
    string caractere1 = "La Plateforme";
    float flottant = 3.14;
    string caractere2 = "Etudiants";

    const void* tableau[] = { (const void*)&entier, (const void*)&caractere1, (const void*)&flottant, (const void*)&caractere2 };

    for (const void* ptr : tableau) {
        if (ptr == (const void*)&entier) {
            cout << "Adresse : " << ptr << ", Valeur : " << *((int*)ptr) << endl;
        } else if (ptr == (const void*)&caractere1 || ptr == (const void*)&caractere2) {
            cout << "Adresse : " << ptr << ", Valeur : " << *((string*)ptr) << endl;
        } else if (ptr == (const void*)&flottant) {
            cout << "Adresse : " << ptr << ", Valeur : " << *((float*)ptr) << endl;
        }
    }

    return 0;
}
