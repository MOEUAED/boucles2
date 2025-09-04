#include<stdio.h>

int main (){

int a , i ,j, espace, etoile ;
do {
printf("Entrez le nombre de lignes d'etoiles que vous voulez dans la pyramide : ");
scanf("%d",&a);
}while (a <= 0 );

for (i = 1 ; i <= a  ; i++){
    espace = 2 * i - 1 ;
    etoile = a - i ;
        for (j = etoile ;j >= 1 ; j--){
        printf(" ");

    }
    for (j = 0 ;j <espace ; j++){
        printf("*");

    }
    printf("\n");
}

return 0;
}
