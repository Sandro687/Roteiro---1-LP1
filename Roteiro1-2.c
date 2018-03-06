#include <stdio.h>

int fibonacci(int num){

   if(num == 1 || num == 2)
       return 1;
   else
       return fibonacci(num - 1) + fibonacci(num - 2);
}

int main(void){

   int n,i;

   printf("Digite a quantidade de termos da sequência de Fibonacci: ");
   scanf("%d", &n);
   printf("A sequência de Fibonacci e: \n");

   for(i = 0;i < n;i++){
       printf("%d ", fibonacci(i + 1));
    }
}
