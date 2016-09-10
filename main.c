//*************************************************************************************************
//**                                  Autor: Jean Emílio Wilhelm                                 **
//*************************************************************************************************
//**    Função: Programa utilizado para iniciar os estudos com conceito básico em ponteiro       **
//**                            Ponteiros com strings e typedef structs                          **
//*************************************************************************************************
//**                          Arquivo alterado em 09 de setembro de 2016                         **
//**                     Aula de Laboratório de Algorítmos - Segundo Semestre                    **
//*************************************************************************************************
//*************************************************************************************************
#include <stdio.h>
#include <stdlib.h>


//typedef = define um tipo de
typedef struct 
{
	int indice;
	char nome[50];
	char telefone[15];
	char email[100];
} entrada;

int main()
{
	//criação e inicialização das variáveis e ponteiros
	entrada pagina_01;
	entrada *P = &pagina_01;
	//pagina_01.indice = 1;
	//pagina_01.nome = {"Jean Emilio Wilhelm"};
	//pagina_01.telefone = {"(55) 9650-6141"};
	
	// os dois tipos de scanf funcionam !!!
	
	printf("\nInsira a entrada: ");
	//scanf("%i", &P->indice);
	scanf("%i", &(*P).indice);

	printf("\nInsira o Nome: ");	
	//scanf("%s", &P->nome);
	scanf("%s", &(*P).nome);
		
	printf("\nInsira o Telefone: ");
	//scanf("%s", &P->telefone);
	scanf("%s", &(*P).telefone);
	
	printf("\nInsira o email: ");	
	//scanf("%s", &P->email);
	scanf("%s", &(*P).email);
	
	
	printf("\nEntrada: %i", pagina_01.indice);
	printf("\nNome: %s", pagina_01.nome);
	printf("\nTelefone: %s", pagina_01.telefone);
	printf("\nEmail: %s", pagina_01.email);
	
	// retorna 0
	return 0;
}
