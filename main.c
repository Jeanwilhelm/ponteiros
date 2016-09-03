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

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// inicializa uma variável global
int numero=2;
//inicializa o ponteiro
int *ptr_numero = &numero;

int main(int argc, char *argv[]) 
{
	//pede ao usuário que insira um numero
	printf("Insira um numero: ");
	
	//recebe o numero inserido e aloca no ponteiro
	scanf("%i", ptr_numero);
	
	//exibe na tela o numero que o usuário inseriu
	printf("O numero inserido foi: %i", *ptr_numero);
	
}
