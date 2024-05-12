#include <iostream>

using namespace std;

int main(void) {
    int n;

    do {
        cout << "Donnez un nombre > 0 : ";
        cin >> n;
    } while (n <= 0);

    cout << "Vous avez saisi : " << n << endl;

    return 0;
}
