#include <iostream>
#include <vector>

using namespace std;

vector<int> fusionnerTab(const vector<int>& tableau1, const vector<int>& tableau2) {
    vector<int> tableauFus;
    int taille1 = tableau1.size();
    int taille2 = tableau2.size();
    int i = 0, j = 0;

    while (i < taille1 && j < taille2) {
        if (tableau1[i] < tableau2[j]) {
            tableauFus.push_back(tableau1[i]);
            i++;
        } else {
            tableauFus.push_back(tableau2[j]);
            j++;
        }
    }

    while (i < taille1) {
        tableauFus.push_back(tableau1[i]);
        i++;
    }

    while (j < taille2) {
        tableauFus.push_back(tableau2[j]);
        j++;
    }

    return tableauFus;
}

int main(void) {

    vector<int> tableau1 = {1, 3, 5, 7, 9, 11};
    vector<int> tableau2 = {0, 2, 4, 6, 8, 10};

    vector<int> tableauFus = fusionnerTab(tableau1, tableau2);

    cout << "Tableau fusionne : ";
    for (int num : tableauFus) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
