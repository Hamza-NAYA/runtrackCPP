#include <iostream>

using namespace std;

int main(void) {
    double prixHT, Qte, tauxTVA, prixTTC;

    cout << "Entrez le prix HT d'un kilo de carottes : ";
    cin >> prixHT;

    cout << "Entrez le nombre de kilos de carottes : ";
    cin >> Qte;

    cout << "Entrez le taux de TVA en pourcentage : ";
    cin >> tauxTVA;

    prixTTC = prixHT * Qte * (1 + tauxTVA / 100.0);

    cout << "Le prix TTC des carottes est de : " << prixTTC << " euros." << endl;

    return 0;
}
