#include<conio.h>
#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int idad, mes, dia, hora, min, seg;
	
	printf("\nEste algorítimo mostra mostra quantos meses, dias, horas, minutos e segundos você tem :)");
	
	printf("\n\nDigite a sua idade: ");
	scanf("%d", &idad);
	
	mes = idad * 12;
	dia = idad * 365;
	hora = dia * 24;
	min = hora * 60;
	seg = min * 60;
	
	printf("\n\nVocê viveu esta quantidade de meses: %d", mes);
	printf("\n\nVocê viveu esta quantidade de dias: %d", dia);
	printf("\n\nVocê viveu esta quantidade de horas: %d", hora);
	printf("\n\nVocê viveu esta quantidade de minutos: %d", min);
	printf("\n\nVocê viveu esta quantidade de segundos: %d", seg);
	
	printf("\n\nAcaboooooooooooooou :)");
	getch();
	
	return 0;
}
