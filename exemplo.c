#include<stdio.h>

int main ()
{

	int dia = 0;

	printf("Favor informe um numero\n");
	scanf("%d",&dia);

	switch (dia)
	{
		case 1:
			printf("o numero informado representa domingo\n");
		break;
		case 2:
			printf("o numero informado representa segunda-feira\n");
		break;
		case 3:
			printf("o numero informado representa terca-feira\n");
		break;
		case 4:
			printf("o numero informado representa quarta-feira\n");
		break;
		case 5:
			printf("o numero informado representa quinta-feira\n");
		break;
		case 6:
			printf("o numero informado representa sexta-feira\n");
		break;
		case 7:
			printf("o numero informado representa sabado\n");
		break;
		default:
			printf("o numero informado não respresenta um dia da semana\n");
	}

}
