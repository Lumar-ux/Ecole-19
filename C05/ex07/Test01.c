#include <stdio.h>

int est_premier(int n) {
    if (n <= 1) {
        return 0;
    }

    int i = 2;
    int estPremier = 1;
    while (i * i <= n && estPremier) {
        if (n % i == 0) {
            estPremier = 0; 
        }
        i++;
    }

    return estPremier;

int main(void) {
    int num = 17;
    if (est_premier(num)) {
        printf("%d est premier\n", num);
    } else {
        printf("%d n'est pas premier\n", num);
    }
    return 0;
}
