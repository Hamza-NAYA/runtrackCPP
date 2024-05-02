#include <iostream>
#include <cstring>

using namespace std;

int main(void) {
    char arr[] = "vive la plateforme !";

    cout << "Miniscule :" << endl;
    cout << arr << endl;

    cout << "Majuscule :" << endl;
    for (int i = 0; i < strlen(arr); i++) {
        putchar(toupper(arr[i]));
    }
    return 0;
}