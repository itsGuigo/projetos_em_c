/* programa para calcular dois numeros usando o comendo switch()
entrar com dois numeros, escolher a op��o (soma, subtrair, multiplicar e dividir)
e mostrar o resultado da opera��o escolhida */
#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int opcao;
	float num1, num2, result;
// criar o menu

    printf("-----------------------------------\n");
	printf("Menu - Calculadora Simples\n");
	printf("1 - Soma \n");
	printf("2 - Subtracao \n");	
	printf("3 - Multiplicacao \n");
	printf("4 - Divisao \n");
	printf("-----------------------------------\n");
    printf("\nEscolha a opcao desejada: ");
    scanf_s("%d", &opcao);
	printf("\nDigite o primeiro numero: ");
	scanf_s("%f",&num1);
	printf("\nDigite o segundo numero: ");
	scanf_s("%f",&num2);
	

	
// switch

    switch(opcao)
	{
    	case 1:
    		result = num1 + num2;
    		printf("\nResultado da soma de dois numeros: %.2f",result);
    		break;
    		
    		case 2:
    		result = num1 - num2;
    		printf("\nResultado da subtracao de dois numeros: %.2f",result);
    		break;
    		
    		case 3:
    		result = num1 * num2;
    		printf("\nResultado da multiplicacao de dois numeros: %.2f",result);
    		break;
    		
    		case 4:
    		result = num1 / num2;
    		printf("\nResultado da divisao de dois numeros: %.2f",result);
    		break;
    		default: //caso nao seja nenhuma opção
    			printf("Opcao invalida!");
    				
	}	
	printf("\nFim do programa\n");
	printf("\n");	
	system("pause");
	return 0;
}
