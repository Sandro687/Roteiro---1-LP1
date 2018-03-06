#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char sexo;
	float altura;
}Dados;

int main(void){
	Dados D[10];
	int opcao,i,contM,contF;
	float mediaF = 0.0,mediaM = 0.0,maior,menor;
	char s1,s2;
	do{
		system("cls");
		printf("\n1 - Ler Dados");
		printf("\n2 - Media de Altura Sexo M");
		printf("\n3 - Media de Altura Sexo F");
		printf("\n4 - Maior e Menor Altura ");
		printf("\n5 - Numero por Sexo");
		printf("\n6 - Sair");
		printf("\n--> ");
		scanf("%i",&opcao);

		switch(opcao){
			case 1:
				for(i = 0; i < 10; i++){
					printf("\nLeia O Sexo F ou M  %i de 10: ",i+1);
					scanf("%s",&D[i].sexo);
					printf("\nLeia a Altura %i de 10: ",i+1);
					scanf("%f",&D[i].altura);
				}
			break;

			case 2:
					contM = 0;
					for(i = 0; i < 10; i++){
						if(D[i].sexo == 'm'){
							mediaM = mediaM + D[i].altura;
							contM++;
						}
					}
					mediaM = mediaM / contM;
					printf("A media de Altura do sexo M: %.2f\n",mediaM);
			break;

			case 3:
				contF = 0;
				for(i = 0; i < 10; i++){
						if(D[i].sexo == 'f'){
							mediaF = mediaF + D[i].altura;
							contF++;
						}
					}
					mediaF = mediaF / contF;
					printf("A media de Altura do sexo F: %.2f\n",mediaF);

			break;

			case 4:

				menor = D[0].altura;
				s1 = D[0].sexo;
				maior = D[0].altura;
				s2 = D[0].sexo;
				for(i = 1; i < 10; i++){
						if(D[i].altura > maior){
							maior = D[i].altura;
							s1 = D[i].sexo;
						}
						else if(D[i].altura < menor){
							menor = D[i].altura;
							s2 = D[i].sexo;
						}
					}
					printf("\nMaior: %.2f Sexo: %c \nMenor: %.2f Sexo: %c",maior,s1,menor,s2);
			break;

			case 5:
					printf("\nNumero do sexo Masculino: %i",contM);
					printf("\nNumero do sexo Feminino: %i\n",contF);
			break;

			default:
				printf("\nOpcao Invalida");


		}
		system("pause");
	}while(opcao != 6);
}
