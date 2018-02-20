// Supondo que os números anteriores são notas, calcule a média da turma e quantos alunos tiraram nota acima desta média calculada.
// obrigatório colocar primeiro ser nessa ordem ( <= ou >= )
// Para pegar só o indice do vetor basta colocar [i]
#include <stdio.h>

int main ()
{
	int vet[10];
	  float media, soma = 0;
		int i, nota,j =0;
	
		for(i=0; i <=9 ; i++)
	
		{
			printf("Insira um numero:  ");
				scanf("%d", &vet[i]);
				
		soma = soma + vet[i];
		
		}
	
	media = soma / 10;
	
		for( i=0; i<=9; i++)
		{
			if (vet[i] > media)
				j ++;
							
		}
		
		printf("  media da turma = %f ",media);
		printf(" notas acima da media = %d ",j);
		
	return 0;
		
}


