#include "Joueur.hpp"
#include <iostream>

using namespace std;

Joueur::Joueur() {
    x = 0;
    y = 0;
}

void Joueur::initialiserPosition(int posX, int posY) {
    x = posX;
    y = posY;
}

void Joueur::afficherPosition() {
    cout << "Position du joueur : (" << x << ", " << y << ")" << endl;
}

void Joueur::deplacer(int deplacementX, int deplacementY) {
    x += deplacementX;
    y += deplacementY;
}


int main(void) {
    Joueur joueur;

    joueur.initialiserPosition(0, 0);

    joueur.afficherPosition();

    joueur.deplacer(10, -3);

    joueur.afficherPosition();

    joueur.deplacer(-5, 6);

    joueur.afficherPosition();

    return 0;
}
