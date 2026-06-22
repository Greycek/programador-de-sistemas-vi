#include<stdio.h>

	int main ()
	{
		/*Declaração de variaveis*/
	char nome [25];
	int placar = 0;
	char resp;
	
		printf("=====================\n");
		printf("|Bem vindo ao jogo de revisao|\n");
		printf("=====================\n");
		
		printf("Informe o seu nome:\n");
		scanf("%[^\n]",nome);
		
		printf("Pergunta 01 - Qual a a diferenca entre double e float\n");
		printf("A)Ambos sao iguais\n");
		printf("B)Ambos usam 4 bites de espaco de memoria\n");
		printf("C) O double ocupa 8 bits, ja o float ocupa 4 bits\n");
		printf("D) Nenhuma das anteriores\n");
		
		scanf(" %c",&resp);
		if(resp== 'C' || resp == 'c')
		{
			placar++;
		}
		
		printf("Pergunta 02 - Qual estrutura devo utilizar quando nao sei o numero de interacoes do meu laço?\n");
		printf("A) Estrutura FOR\n");
		printf("B) Estrutura WHILE\n");
		printf("C) Estrutura DO WHILE\n");
		printf("D) Devemos utilizar o IF\n");
		
		scanf(" %c",&resp);
		if(resp== 'B' || resp == 'B')
		{
			placar++;
		}
		
		printf("Pergunta 03 - Para que serve o metodo de Newthon-Raphson\n");
		printf("A) Para dificultar a nossa vida\n");
		printf("B) Para calcular a distancia entre um ponto\n");
		printf("C) Para aproximar polinomios e encontrar suas raizes\n");
		printf("D) Para poder usar o teclado\n");
		
		scanf(" %c",&resp);
		if(resp== 'C' || resp == 'c')
		{
			placar++;
		}
		
		printf("Pergunta 04 - Dada a proposicao P ^ Q qual sua tabela verdade\n");
		printf("A) |--------------|\n");
		printf("   |-P-|-Q-|-P^Q-|\n");
		printf("   |-0-|-0-|-0-|\n");
		printf("   |-0-|-1-|-0-|\n");
		printf("   |-1-|-0-|-0-|\n");
		printf("   |-1-|-1-|-1-|\n");
		printf("   |-----------|\n");
		
		printf("B) |--------------|\n");
		printf("   |-P-|-Q-|-P^Q-|\n");
		printf("   |-0-|-0-|-1-|\n");
		printf("   |-0-|-1-|-0-|\n");
		printf("   |-1-|-0-|-0-|\n");
		printf("   |-1-|-1-|-1-|\n");
		printf("   |-----------|\n");
		
		printf("C) |--------------|\n");
		printf("   |-P-|-Q-|-P^Q-|\n");
		printf("   |-0-|-0-|-0-|\n");
		printf("   |-0-|-1-|-1-|\n");
		printf("   |-1-|-0-|-0-|\n");
		printf("   |-1-|-1-|-1-|\n");
		printf("   |-----------|\n");
		
		printf("D) |--------------|\n");
		printf("   |-P-|-Q-|-P^Q-|\n");
		printf("   |-0-|-0-|-0-|\n");
		printf("   |-0-|-1-|-0-|\n");
		printf("   |-1-|-0-|-0-|\n");
		printf("   |-1-|-1-|-1-|\n");
		printf("   |-----------|\n");
		
		scanf(" %c",&resp);
		if(resp== 'A' || resp == 'A')
		{
			placar++;
		}
		
		printf("Pergunta 05 - Para que serve a biblioteca stdio.h\n");
		printf("A) Para podermos usar o mouse\n");
		printf("B) Para conseguir fazer soma\n");
		printf("C) Para podermos usar o teclado\n");
		printf("D) Para utilizarmos as funcoes que controlam as entradas e saidas do sistama\n");
		
		scanf(" %c",&resp);
		if(resp== 'D' || resp == 'D')
		{
			placar++;
		}
	}