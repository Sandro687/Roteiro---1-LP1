#include <stdio.h>
#include <string.h>

int ChecaPalindromo(char str[], char str2[], int tam){
    int i;
    for(i = 0; i < tam; i++){
        if(str[i] != str2[i])
            return 0;
    }return 1;
}
int EliminarEspaco(char str[]){
      char str2[100];
      int i, tam, j;
      tam = strlen(str);
      for(i = 0; i < tam; i++){
            if(str[i] == ' ')
                for(j = i; j < tam; j++){
                     str[j] = str[j+1];
        }
    tam = strlen(str);
    for(i = 0; i < tam; i++)
        str2[i] = str[tam-i-1];
        str2[tam] = '\0';
        printf("\nString digitada: %s", str);
        printf("\nString invertida: %s\n\n", str2);
        return(ChecaPalindromo(str, str2, tam));
    }
}
int main(void){
      char str[100];
      int resultado;
      printf("----Verificacao de palindromos----\n\n");
      printf("Digite a string a ser verificada.\n");
      gets(str);
      resultado = EliminarEspaco(str);
      if(resultado == 0)
           printf("\nA string digitada nao e um palindromo.\n\n\n");
      else
           printf("\nA string digitada e um palindromo.\n\n\n");
      return 0;
}
