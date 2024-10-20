#include <iostream>
using namespace std;


void tester_parametres(int* tableau, int taille) {
    cout << taille << " param�tres executes." << endl;
}

int main() {
    int nb_params = 10000;
    int* tableau;

    while (1) {

        tableau = (int*) malloc(nb_params * sizeof(int));

        if (tableau == NULL) {
            cout << "Erreur : Impossible d'allouer la m�moire pour " << nb_params << " param�tres." << endl;
            break;
        }

        tester_parametres(tableau, nb_params);
        free(tableau);
        nb_params += 100000;
    }

    return 0;
}
