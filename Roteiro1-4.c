#include <stdio.h>

int main(void){

    int x,y,tam;
    char nome[30];

    printf("Digite uma palavra: ");
    gets(nome);
    tam = strlen(nome);
    for (x = 0; x <= tam; x++){
        for (y = 0; y <= (x-1); y++)
            printf("%c",nome[y]);
            printf("\n");
    }
    return 0;
}
