#include <iostream>
#include <cstring>

using namespace std;

bool verifierFormatHeure(const char* heure) {

    if (strlen(heure) != 5)
        return false;

    if (heure[0] >= '0' && heure[0] <= '9' &&
        heure[1] >= '0' && heure[1] <= '9' &&
        heure[2] == 'h' &&
        heure[3] >= '0' && heure[3] <= '9' &&
        heure[4] >= '0' && heure[4] <= '9')
        return true;
    else
        return false;
}

int main(void) {
    char heure[6];

    cout << "Veuillez entrer une heure au format XXhXX : ";
    cin.getline(heure, 6);

    if (verifierFormatHeure(heure)) {
        cout << "L'heure est au bon format " << endl;
    } else {
        cout << "L'heure n'est pas au bon correct" << endl;
    }

    return 0;
}
