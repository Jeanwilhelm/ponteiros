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

int main()
{
	//criacao e inicializacao das variaveis e ponteiros
	
	//char MinhaString[] = {"1234567890"};
	char MinhaString[] = {'1','2','3','4','5','6','7','8','9','0'};
	char *MeuPonteiro = &MinhaString;
	
	// exibe o valor contido em cada posicao da string a partir do endereço contido no ponteiro
	do
	{
		printf("\nO MeuPonteiro aponta para o valor: %c\n", *MeuPonteiro);
		MeuPonteiro++;
	}
	while(*MeuPonteiro != 0);
	
	printf("\nO tamanho de MinhaString e: %i\n", sizeof(MinhaString));
	
	// retorna 0
	return 0;
}
