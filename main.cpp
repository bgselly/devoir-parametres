#include <iostream>
using namespace std;


void tester_parametres(int* tableau, int taille) {
    cout << taille << " paramètres executes." << endl;
}

int main() {
    int nb_params = 100;
    int* tableau;

    while (1) {

        tableau = (int*) malloc(nb_params * sizeof(int));

        if (tableau == NULL) {
            cout << "Erreur : Impossible d'allouer la mémoire pour " << nb_params << " paramètres." << endl;
            break;
        }

        tester_parametres(tableau, nb_params);
        free(tableau);
        nb_params += 100000;
    }

    return 0;
}
