#include <iostream>
#include "Entreprise.h"

using namespace std;

int main() {
    // Création d'une entreprise avec le constructeur par défaut
    Entreprise entreprise1;
    cout << "Entreprise 1 (constructeur par défaut) : "
        << entreprise1.getNomEntreprise() << ", "
        << entreprise1.getVilleEntreprise() << endl;

    return 0;
}
