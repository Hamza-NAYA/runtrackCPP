#ifndef JOUEUR_HPP
#define JOUEUR_HPP

class Joueur {
private:
    int x;
    int y;

public:
    Joueur();

    void initialiserPosition(int posX, int posY);
    void afficherPosition();
    void deplacer(int deplacementX, int deplacementY);
};

#endif
