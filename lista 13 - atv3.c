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
	int l, c, somaL=0, soma_tot=0, somaC=0;
	
	printf("Exibir matriz\n\n");
	
	for(l=0; l<TL; l++)
	{
		for(c=0; c<TC; c++)
		{
			printf("\nMatriz[%d][%d] = %d", l, c, mat[l][c]);
			
			if(l == 3)
			{
				somaL += mat[l][c];
			}
			if(c == 2)
			{
				somaC += mat[l][c];
			}
			soma_tot += mat[l][c];
		}
		
		
	}
	printf("\nA soma total eh: %d", soma_tot);
	printf("\nA soma da linha 3 eh: %d", somaL);
}

void main()
{
	int l, c;
	
	int mat[TL][TC];
	carregar_matriz(mat);
	exibir_matriz(mat);
}
