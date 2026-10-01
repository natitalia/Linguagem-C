#include<stdio.h>
#include<conio.h>

#define TL 3
#define TC 3

void carregar_matriz(int mat[TL][TC])
{
	int l, c, num =10;
	
	printf("Carregar Matriz\n\n");
	for(l=0; l<TL; l++)
	{
		for(c=0; c<TC; c++)
		{
		//printf("Informe Matriz[%d][%d]: ", l,c);
		//scanf("%d", &mat[l][c]);
		mat[l][c] = num;
		num+=10;
		}
	}
}


void exibir_matriz(int mat[TL][TC])
{
	int l, c, soma=0;
	
	printf("Exibir matriz\n\n");
	for(l=0; l<TL; l++)
	{
		for(c=0; c<TC; c++)
		{
			printf("\nMatriz[%d][%d] = %d", l, c, mat[l][c]);
			soma += mat[l][c];
		}
	}
	printf("\n\nsoma: %d", soma);
}


void main()
{
	int l, c;
	
	int mat[TL][TC];
	carregar_matriz(mat);
	exibir_matriz(mat);
}
