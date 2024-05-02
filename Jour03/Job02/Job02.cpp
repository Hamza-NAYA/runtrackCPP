#include <iostream>
#include <cstring>

using namespace std;

int main(void) {
    char arr[] = "vive la plateforme !";

    cout << arr << endl;

    for (int i = 0; i < strlen(arr); i++) {
        if (arr[i] != 'a' && arr[i] != 'e' && arr[i] != 'i' && arr[i] != 'o' && arr[i] != 'u' && arr[i] != 'y') {
            putchar(arr[i]);
        }
    }

    return 0;
}

// a, e, i, o, u, y