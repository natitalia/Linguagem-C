#include<stdio.h>
#include<conio.h>

#define TL 4
#define TC 4

void carregar_matriz(int mat[TL][TC])
{
	int l, c;
	
	printf("Carregar Matriz\n\n");
	for(l=0; l<TL; l++)
	{
		for(c=0; c<TC; c++)
		{
		printf("Informe Matriz[%d][%d]: ", l,c);
		scanf("%d", &mat[l][c]);
		}
	}
}


void exibir_matriz(int mat[TL][TC])
{
	int l, c, num;
	
	printf("Exibir matriz\n\n");
	
	printf("\nInforme o numero que deseja procurar: ");
	scanf("%d", &num);
	
	for(l=0; l<TL; l++)
	{
		for(c=0; c<TC; c++)
		{
			printf("\nMatriz[%d][%d] = %d", l, c, mat[l][c]);
			
			if(num == mat[l][c])
			{
				printf(" Numero encontrado!");
			}
		}
	}
}


void main()
{
	int l, c;
	
	int mat[TL][TC];
	carregar_matriz(mat);
	exibir_matriz(mat);
}
