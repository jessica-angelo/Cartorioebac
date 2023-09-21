#include <stdio.h> //biblioteca de comunica��o co o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��o de texto por regi�o
#include <string.h> //biblioteca respons�vel por cuidar dos strings

int registro() //Fun��o respons�vel por cadasrtrar os usu�rios no sistema
{
	// in�cio cria��o de vari�veis/string
	char arquivo [40];
	char cpf [40];
	char nome [40];
	char sobrenome [40];
	char cargo [40];
	// final cria��o de vari�veis/string
	
	printf("Digite o CPF a ser cadastrado"); //coletando informa��es do usu�rio
	scanf("%s", cpf); //%s refere-se a string
	
	strcpy(arquivo, cpf); // Respons�vel por copiar os valores das strings
	
	FILE *file; // cria o arquivo
	file = fopen(arquivo, "w"); // cria o arquivo e o "w" significa escrever
	fprintf(file,cpf); // salva o valor da vari�vel
	fclose(file); // fecha o arquivo
	
	file = fopen(arquivo, "a"); //abre o arquivo
	fprintf(file, ","); 
	fclose(file); // fecha o arquivo
	
	printf("Digite o nome a ser cadastrado:");
	scanf("%s", nome); // refere-se a string "nome"
	
	file = fopen(arquivo, "a"); // abre o arquivo
	fprintf(file, nome);
	fclose(file); // fecha o arquivo
	
	file = fopen(arquivo, "a"); //abre o arquivo
	fprintf(file, ",");
	fclose(file); // fecha o arquivo
	
	printf("Digite o sobrenome a ser cadastrado:");
	scanf("%s", sobrenome); // refere-se a string "sobrenome"
	
	file = fopen(arquivo, "a"); //abre o arquivo
	fprintf(file, sobrenome);
	fclose(file); // fecha o arquivo
	
	file = fopen(arquivo, "a"); //abre o arquivo
	fprintf(file, ",");
	fclose(file); // fecha o arquivo
	
	printf("Digite o cargo a ser cadastrado:");
	scanf("%s", cargo); // refere-se a string "cargo"
		
	file = fopen(arquivo, "a"); // abre o arquivo
	fprintf(file, cargo);
	fclose(file); // fecha o arquivo
	
	system("pause");
}

int consulta()
{
	setlocale(LC_ALL, "Portuguese"); // Definindo a lingua
	char cpf [40];
	char conteudo [200];
	
	printf("Digite o CPF a ser consultado:"); // coletando informa��es do usu�rio
	scanf("%s",cpf); //%s, refere-se a string
	
	FILE *file; // cria o arquivo
	file = fopen(cpf, "r"); // abre o arquivo e o "r" significa ler
	
	if(file == NULL)
	{
		printf("N�o foi poss�vel abrir o arquivo, n�o localizado!.\n");
	}
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas s�o as informa��es do usu�rio:");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	system("pause");
}

int deletar()
{
	char cpf [40];
	
	printf("Digite o CPF do usu�rio a ser deletado:"); // coletando informa��es do usu�rio
	scanf("%s",cpf); //%S, refere-se a string
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL)
	{ 
		printf("O usu�rio n�o se encontra no sistema! \n");
		system("pause");
	}
}

int main ()
{
	int opcao=0; // Definindo as vari�veis
	int laco=1;
	
	for(laco=1;laco=1;)
	{
		
		system("cls");
		
		setlocale(LC_ALL, "Portuguese"); // Definindo a linguagem
	
		printf("### Cart�rio da EBAC ###\n\n"); // In�cio do menu
		printf("Escolha a op��o desejada no menu:\n\n");
		printf("\t1 - Registrar nomes\n"); //op��es menu
		printf("\t2 - Consultar nomes \n");//op��es menu
		printf("\t3 - Deletar nomes\n\n"); //op��es menu
		printf("\t4 - Sair do sistema\n\n");// Fim do menu
	
		scanf("%d", &opcao); // Armazenando a escolha do usu�rio
	
		system("cls"); //respons�vel por limpar a tela
		
		switch(opcao) // in�cio da sele��o do menu
		{
			case 1:
			registro(); //chamada de fun��o "registro"
			break;
		
			case 2:
			consulta();//chamada de fun��o "consulta"
			break;
		
			case 3:
			deletar();//chamada de fun��o "deletar"
			break;
			
			case 4:
			printf("Obrigado por utilizar o sistema!\n");
			return 0;
			break;	
			
			default:
			printf("Essa op��o n�o est� dispon�vel\n");
			system("pause");
			break;
			// fim da sele��o
		}
				
				
				
				
		}
	
		
	
	}


	


