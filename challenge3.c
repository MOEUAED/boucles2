#include<stdio.h>
#include<math.h>
int main (){
    int n ,i , j , p;
     do {
        printf("entrer un nombre : ");
        scanf("%d",&n);
     }while (n <= 0);

     for (i = 2; i<= n ; i++) {
    p = 1 ;
        for ( j = 2 ; j <= sqrt(i) ; j++){
            if ( i % j == 0){
                p = 0 ;
                break ;
            }
        }
        if (p == 1){
            printf ("%d \n" , i);
        }


     }

     return 0;
}

