//*************************************************************************************************
//**                                  Autor: Jean Emílio Wilhelm                                 **
//*************************************************************************************************
//**    Função: Programa utilizado para iniciar os estudos com conceito básico em ponteiros      **
//*************************************************************************************************
//**                          Arquivo alterado em 02 de setembro de 2016                         **
//**                     Aula de Laboratório de Algorítmos - Segundo Semestre                    **
//*************************************************************************************************
//*************************************************************************************************
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) 
{
	//criação e inicilização das variaveis
	int variavel_1 = 1, variavel_2 = 2;
	char controle ='n', descarga;
	
	// criação dos ponteiros
	int *ponteiro_1, *ponteiro_2;
	
	//enquanto
	while(1)
	{
		//inciializa os ponteiros
		ponteiro_1 = &variavel_1; //ponteiro_1 recebe o endereço da variavel_1
		ponteiro_2 = &variavel_2; //ponteiro_2 recebe o endereço da variavel_2
	
		//exibe o valor contido em cada variavel a partir do endereço contido
		//nos dois ponteiros
		
		printf("\nvariavel_1 = %i", *ponteiro_1);
		printf("\nvariavel_2 = %i", *ponteiro_2);
	
		// exibe a solicitação de controle
		printf("\n\nDeseja finalizar o programa? (s/n)");
		//efetua a leitura do comando
		scanf("%c", &controle);
		
		//se o comando indicar a finalização, finaliza o loop
		if (controle == 's') break;
		
		//Exibe a solicitação de um valor
		printf("\nDigite um valor para a variavel_1: ");
		//efetua a leitura do valor e transfere o valor para a variavel_1
		scanf("%i", ponteiro_1);
		
		//Exibe a solicitação de um valor
		printf("\nDigite um valor para a variavel_1: ");
		//efetua a leitura do valor e transfere o valor para a variavel_2
		scanf("%i%c", ponteiro_2, &descarga);
	}
	//retorna 0
	return 0;
}
