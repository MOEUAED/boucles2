#include <stdio.h>

int main() {
    int n, i;


    do {
        printf("Entrer un nombre entier positif : ");
        scanf("%d", &n);
    } while (n <= 0);
    printf("Facteurs de %d : ", n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d \n", i);
        }
    }

    printf(".\n");
    return 0;
}
