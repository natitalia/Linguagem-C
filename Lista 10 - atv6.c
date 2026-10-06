#include<conio.h>
#include<stdio.h>

#define TF 10

int mult(int a[],int b[],int c[])
{
	int i;
	
	for(i=0; i<TF; i++)
	{
		printf("\nVetor A, valor %d: ", i + 1);
		scanf("%d", &a[i]);
	}
	
	for(i=0; i<TF; i++)
	{
		printf("\nVetor B, valor %d: ", i + 1);
		scanf("%d", &b[i]);
	}
	
	for(i=0; i<TF; i++)
	{
		c[i] = a[i] * b[i];
	}
}

int main()
{
	int a[TF], b[TF], c[TF], i;
	
	mult(a,b,c);
	
	printf("\nVetor resultante (A x B):\n");
	for(i = 0; i < TF; i++)
	{
		printf("c[%d] = %d\n", i, c[i]);
	}
	
	return 0;
}
