#include<conio.h>
#include<stdio.h>

//Exer 3

int somar(int a,int b,int c)
{
	int soma;
	soma = a + b + c;
	
	return soma;
}

int somarMedia(int a,int b, int c)
{
	int media;
	media = (somar(a,b,c))/3;
	
	return media;
}

int numMaior(int a, int b, int c)
{
	int maior;
	
	if (a > b && a > c)
	{
		maior = a;
	}
	else
		if(b > a && b > c)
		{
			maior = b;
		}
		else
			if(c > a && c > b)
			{
				maior = c;
			}
	return maior;
}

int numMenor(int a, int b, int c)
{
	int menor;
	
	if (a < b && a < c)
	{
		menor = a;
	}
	else
		if(b < a && b < c)
		{
			menor = b;
		}
		else
			if(c < a && c < b)
			{
				menor = c;
			}
	return menor;
}


void main()
{
	int a, b, c, resul1, resul2, resul3, resul4;
	
	printf("\nDigite o valor A: ");
	scanf("%d", &a);
	
	printf("\nDigite o valor B: ");
	scanf("%d", &b);
	
	printf("\nDigite o valor C: ");
	scanf("%d", &c);
	
	resul1 = somar(a, b, c);
	printf("\nO resultado da sua conta eh: %d", resul1);
	
	
	resul2 = somarMedia(a, b, c);
	printf("\n\nO resultado da media eh: %d", resul2);

	
	resul3 = numMaior(a, b, c);
	printf("\n\nO numero maior eh: %d", resul3);
	
	
	resul4 = numMenor(a, b, c);
	printf("\n\nO menor numero eh: %d",resul4);
	
	printf("\n\nFim do programa :D !");
}
