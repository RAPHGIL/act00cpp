#include <iostream>
#include "Entreprise.h"

using namespace std;

int main() {
    // Cr�ation d'une entreprise avec le constructeur par d�faut
    Entreprise entreprise1;
    cout << "Entreprise 1 (constructeur par d�faut) : "
        << entreprise1.getNomEntreprise() << ", "
        << entreprise1.getVilleEntreprise() << endl;

    return 0;
}
