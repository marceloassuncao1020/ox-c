#include <stdio.h>
#include <stdlib.h>

int main(int argc,char*argv[]){
    if(argc != 2){
        printf("Você precisa digitar um número.\n");
        return 1;
    }

    int n = atoi(argv[1]);

    if (n % 2 == 0) {
        printf("Você digitou %d, que é par, então a letra é O\n",n);
    } else {
        printf("Você digitou %d, que é ímpar, então a letra é X\n",n);
    }
    
    printf("Marcelo Rigotti")

    return 0;

}