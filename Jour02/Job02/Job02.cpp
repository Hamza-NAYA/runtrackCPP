#include <iostream>

int main(){
    int n;
    std::cin >> n;
    switch(n) 
    {
        case 0 : std::cout << "Nul\n";
        case 1 : 
        case 2 : std::cout << "petit\n";
                            break;
        case 3 : 
        case 4 :
        case 5 : std::cout << "Moyen\n";
        default : std::cout << "Grand\n";
    }
}


// Pour n = 0, il affichera :
// Nul
// petit

// Pour n = 1, il affichera :
// petit

// Pour n = 4, il affichera :
// Moyen
// Grand

// Pour n = 10, il affichera :

// Pour n = -5, il affichera :
// Grand