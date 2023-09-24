#include <stdio.h>

int est_premier(int n) {
    if (n <= 1) {
        return 0; // Faux (non premier)
    }

    int i = 2;
    int estPremier = 1; // On suppose que le nombre est premier

    while (i * i <= n && estPremier) {
        if (n % i == 0) {
            estPremier = 0; // Faux (non premier)
        }
        i++;
    }

    return estPremier; // Renvoie 1 si premier, 0 sinon
}

int main(void) {
    int num = 17;  // Exemple : Vérifier si 17 est premier
    if (est_premier(num)) {
        printf("%d est premier\n", num);
    } else {
        printf("%d n'est pas premier\n", num);
    }
    return 0;
}
