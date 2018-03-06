#include <stdio.h>

int main (void){

    double salarioB, salarioL, desconto;

    printf("Digite o valor do salario bruto.\n");
    scanf ("%lf", &salarioB);

    if (salarioB <= 420){
    desconto = 0.08 * salarioB;
    salarioL = salarioB - desconto;
    }else if (salarioB > 420 && salarioB <= 1350){
    desconto = 0.09 * salarioB;
    salarioL = salarioB - desconto;
    }else if (salarioB > 1350){
    desconto = 0.1 * salarioB;
    salarioL = salarioB - desconto;
    }
    printf("Salario liquido = %.2lf. Salario bruto = %.2lf. Desconto = %.2lf.\n", salarioL, salarioB, desconto);
    return 0;
}
