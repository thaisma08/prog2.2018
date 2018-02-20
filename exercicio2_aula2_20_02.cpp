
#include <stdio.h>
#include <stdlib.h>

float conta (float x, float y )
{
	printf("\n Insira o numero:  \n ");
		scanf("%f", &x);
	printf("\n Insira o numero:  \n ");
		scanf("%f", &y);
	float resultado = x + y;
		return (resultado);
}

	int main ()
	{
	int soma, num1, num2;
	
	soma = conta ( num1, num2);
	
	printf("A soma e: %d", soma);
	return 0;		
}		
