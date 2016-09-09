//*************************************************************************************************
//**                                  Autor: Jean Emílio Wilhelm                                 **
//*************************************************************************************************
//**    Função: Programa utilizado para iniciar os estudos com conceito básico em ponteiros      **
//*************************************************************************************************
//**                          Arquivo alterado em 09 de setembro de 2016                         **
//**                     Aula de Laboratório de Algorítmos - Segundo Semestre                    **
//*************************************************************************************************
//*************************************************************************************************
#include <stdio.h>
#include <stdlib.h>

//Função que realiza a troca (swap)
void troca (int *ponteiro_1, int *ponteiro_2)
{
	//criação e inicialização de uma variável auxiliar
	int x = 0;
	
	//a variavel auxiliar recebe o conteúdo do primeiro ponteiro
	x = *ponteiro_1;
	//o primeiro ponteiro recebe o conteúdo do segundo ponteiro
	*ponteiro_1 = *ponteiro_2;
	//o segundo ponteiro recebe o conteudo armazenado na variável
	*ponteiro_2 = x;
}

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
		
		//Chama a função que realiza a troca (swap)
		troca(ponteiro_1, ponteiro_2);
		
		//exibe o novo valor da variável após o swap
		printf("\nvariavel_1 depois do swap = %i", *ponteiro_1);
		//exibe o novo valor da variável após o swap
		printf("\nvariavel_2 depois do swap = %i", *ponteiro_2);
		
		//exibe a solicitação de controle
		printf("\n\nDeseja finalizar o programa? (s/n)");
		//efetua a leitura do comando
		scanf("%c", &controle);
		
		//se o comando indicar a finalização, finaliza o loop
		if (controle == 's') break;
		
		//exibe a solicitação de um valor
		printf("\nDigite um valor para a variavel_1: ");
		//efetua a leitura do valor e transfere o valor para a variavel_1
		scanf("%i", ponteiro_1);
		
		//exibe a solicitação de um valor
		printf("\nDigite um valor para a variavel_1: ");
		//efetua a leitura do valor e transfere o valor para a variavel_2
		scanf("%i%c", ponteiro_2, &descarga);
	}
	//retorna 0
	return 0;
}
