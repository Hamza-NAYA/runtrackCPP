#include <iostream>

using namespace std;

int main(void) {
    int tableau[] = {1, 2, 3, 4, 5};

    for (int& element : tableau) {
        cout << element << " ";
    }
    
    return 0;
}
