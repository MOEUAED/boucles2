#include<stdio.h>

int main (){

    int n , inverse , r ;

        printf("entrer un nombre : ");
        scanf("%d",&n);

    while(n!=0){
        r = n %10 ;
        inverse = inverse * 10 + r ;
        n = n / 10;
    }
    printf("%d ", inverse);


}
