#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void) {
    string str;
    cout << "Entrez une chaine de caracteres : ";
    getline(cin, str);

    string str2 = "Bonjour";

    sort(str.begin(), str.end());
    sort(str2.begin(), str2.end());

    cout << "Chaine 1 triee : " << str << endl;
    cout << "Chaine 2 triee : " << str2 << endl;

    return 0;
}
