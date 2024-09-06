#include <stdio.h>

void separerListes(int *liste, int taille, int *positifs, int *negatifs, int *taillePositifs, int *tailleNegatifs) {
    *taillePositifs = 0;
    *tailleNegatifs = 0;

    for (int i = 0; i < taille; i++) {
        if (liste[i] >= 0) {
            positifs[*taillePositifs] = liste[i];
            (*taillePositifs)++;
        } else {
            negatifs[*tailleNegatifs] = liste[i];
            (*tailleNegatifs)++;
        }
    }
}

int main() {
    int liste[] = {3, -1, 0, -7, 5, -3, 2};
    int taille = sizeof(liste) / sizeof(liste[0]);
    int positifs[taille], negatifs[taille];
    int taillePositifs, tailleNegatifs;

    separerListes(liste, taille, positifs, negatifs, &taillePositifs, &tailleNegatifs);

    printf("Liste des positifs ou nuls : ");
    for (int i = 0; i < taillePositifs; i++) {
        printf("%d ", positifs[i]);
    }
    printf("\n");

    printf("Liste des négatifs : ");
    for (int i = 0; i < tailleNegatifs; i++) {
        printf("%d ", negatifs[i]);
    }
    printf("\n");

    return 0;
}
