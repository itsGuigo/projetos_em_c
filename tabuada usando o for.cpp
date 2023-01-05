#include<stdio.h>
#include<stdlib.h>
int main()
{
	int numero, multiplica;
	printf("Digite um numero da tabuada: ");
		scanf_s("%d",&numero);
	
	for(int n=0; n <= 10; n++)
	{
		multiplica=numero*n;
		printf("%d x %d = %d\n",numero,n,multiplica);	
	}
	printf("\nFim da tabuada\n");
	system("pause");
	return 0;
}
