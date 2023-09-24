#include <stdio.h>

int ft_is_prime(int nb) {
    if (nb < 2) {
        return 0; // Pas premier
    }
    for (int i = 2; i * i <= nb; i++) {
        if (nb % i == 0) {
            return 0; // Pas premier
        }
    }
    return 1; // Premier
}

int ft_find_next_prime(int nb) {
    if (nb < 2) {
        return 2; // Le premier nombre premier est 2
    }
    while (1) {
        nb++;
        if (ft_is_prime(nb)) {
            return nb;
        }
    }
}

int main() {
    int nb = 710;
    int res1 = ft_find_next_prime(nb);
    printf("Le prochain nombre premier après %d est : %d", nb, res1);
    return 0;
}
