#include <stdio.h>

int est_premier(int n) {
    if (n <= 1) {
        return 0; // Faux (non premier)
    }

    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) {
            return 0; // Faux (non premier)
        }
        i++;
    }

    return 1; // Vrai (premier)
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
