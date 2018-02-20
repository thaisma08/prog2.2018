//Faça um programa em c para ler um vetor de 10 numeros e imprimir o maior numero lido
// obrigatório colocar primeiro ser nessa ordem ( <= ou >= )
// Para pegar só o indice do vetor basta colocar [i]
#include <stdio.h>

int main ()
{
	int vet[10], maior =0;
	int i;
	
		for(i=0; i <=9 ; i++)
	
		{
			printf("Insira um numero! ");
				scanf("%d", &vet[i]);
				
			if(vet[i] > maior)
				maior = vet[i];
		}
	
	//exibir o maior numero 
	
		printf("\n Maior numero  = %d", maior);
		
	return 0;
		
}
