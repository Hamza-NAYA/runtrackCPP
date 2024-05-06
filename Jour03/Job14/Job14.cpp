#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool estUnPalindrome(const string& mot) {
    int debut = 0;
    int fin = mot.length() - 1;

    while (debut < fin) {
        if (mot[debut] != mot[fin]) {
            return false;
        }
        debut++;
        fin--;
    }
    return true;
}

int main(void) {

    vector<string> tab = {"radar", "hello", "lvel", "stats", "world"};

    cout << "Les palindromes dans le tableau sont :" << endl;

    for (const string& mot : tab) {
        if (estUnPalindrome(mot)) {
            cout << mot << endl;
        }
    }

    return 0;
}
