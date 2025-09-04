#include <stdio.h>

int main() {
    int n, i, s;

    do {
        printf("Entrer un nombre entier positif : ");
        scanf("%d", &n);
    } while (n < 0);

    s = 0;

    for (i = 1; i <= n; i++) {
        s = s + i;
    }

    int form = n * ( n + 1) / 2 ;
    printf("La somme des %d premiers nombres naturels est : %d\n", n, s);
        printf("Verification avec la formule n(n+1)/2 : %d\n", form);

    return 0;
}
