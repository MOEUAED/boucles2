#include <stdio.h>

int main() {
    int n;
    
    printf("Entrez le nombre de termes de la suite de Fibonacci : ");
    scanf("%d", &n);

    int a = 0, b = 1, f;

    printf("Suite de Fibonacci : ");

    for(int i = 0; i < n; i++) {
        if(i < 2) {
            f = i; 
        } else {
            f = a + b;
            a = b;
            b = f;
        }
        if(i == 0)
            printf("%d", f);
        else
            printf(", %d", f);
    }

    printf("\n");
    return 0;
}

