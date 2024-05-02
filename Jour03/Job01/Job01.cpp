#include <iostream>
#include <cstring>

using namespace std;

int main(void) {
    char arr[] = "vive la plateforme !";

    cout << arr << endl;
    for (int i = 0; i < strlen(arr); i++)
        putchar(toupper(arr[i]));
    return(0);
}