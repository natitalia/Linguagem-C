#include<conio.h>
#include<stdio.h>

//Exer 1

float conta(int a, int b)
{
	if (a % 2 == 0 && b % 2 == 0)	//par
	{
		return	a + b;
	}
	else
		if (a % 2 == 1 && b% 2 == 1)	//impar
		{
		return	a - b;
		}
		else 
			if(a % 2 == 0 && b % 2 == 1)
			{
			return	(a + b)/2.0;
			}
			else
				if(a > b)
				{
					return a;
				}
				else
					{
						return b;
					}
}

void main()
{
	int a, b;
	float result;
	
	printf("\nDigite o valor de A: ");
	scanf("%d", &a);
	
	printf("\nDigite o valor de B: ");
	scanf("%d", &b);
	
	result = conta(a, b);
	printf("\nResultado: %.2f", result);
	
	printf("\n\nFim do programa :D !")
}
