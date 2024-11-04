#include <stdio.h> //blibioteca de comunicação com o usuário
#include <stdlib.h> //armazena espaço na memória
#include <locale.h> //texto por regiao 
#include <string.h> //biblioteca que faz as strings funcionaem 

int registro(){//função que cadastra os usuarios no sistema
	
	
	//inicio criação de variaveis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//final criação de variaveis/string

	printf("Digite o CPF a se cadastrado: ");//coletando informação do usuario
	scanf("%s", cpf);//%s referese a strings
	
	strcpy(arquivo, cpf); //copia os valores das strings
	
	FILE *file; //procura na biblioteca um arquivo 
	file = fopen(arquivo, "w"); //fala o que o file faz, abre uma pasta "arquivo" e w de nova
	fprintf(file, cpf); //salva os dados da variavel no file
	fclose(file); //fecha o arquivo
	 
	 file = fopen(arquivo, "a"); // atualiza a informação 
	 fprintf(file,",");
	 fclose(file);
	 
	 printf("Digite o nome a ser cadastrado: ");
	 scanf("%s", nome);
	 
	 file = fopen(arquivo, "a");
	 fprintf(file, nome);
	 fclose(file);
	 
	 file = fopen(arquivo, "a"); // atualiza a informação 
	 fprintf(file,",");
	 fclose(file);
	 
	 printf("Digite o sobrenome: ");
	 scanf("%s", sobrenome);
	 
	 file = fopen(arquivo, "a");
	 fprintf(file, sobrenome);
	 fclose(file);
	 
	 file = fopen(arquivo, "a"); // atualiza a informação 
	 fprintf(file,",");
	 fclose(file);
	 
	 printf("Digite o cargo: ");
	 scanf("%s", cargo);
	 
	 file = fopen(arquivo, "a");
	 fprintf
	 (file, cargo);
	 fclose(file);
	 
	 system("pause");
}

int consulta(){
	
	setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem

	char cpf[40];
	char conteudo[200];
	
	printf("Digigite o CPFa ser consultado: ");
	scanf("%s", cpf);
	
	FILE *file;
	file = fopen(cpf, "r"); //para ler o arquivo
	
	if(file == NULL){
		printf("Arquivo não localizado, digite novamente.\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL){
		printf("\nEssas são as informações do usúario: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	system("pause");
}

int deletar(){
	char cpf[40];
	
	printf("Digite o CPF a ser deletado: ");
	scanf ("%s", cpf);
	
	remove(cpf);

	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL){
		printf("O usuario nao foi cadastrado! \n");
		system("pause");
	}
	                                                                     
}

int main()
{
	int opcao = 0; //Definindo as variaveis

    int laco=1;
	
	for(laco=1;laco=1;){

	
		setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
		system("cls");
	
		printf("### Cartório da EBAC ###\n\n"); //Inicio do menu
		printf("Escolha a opção desejada do menu: \n\n");
		printf("\t1 - Registrar nomes\n");
		printf("\t2 - Consultar nomes\n");
		printf("\t3 - Deletar nomes\n\n"); 
		printf("\t4 - Sair do sistema\n\n");
		printf("Opção: "); //Fim do menu
	
	
		scanf("%d", &opcao); //Armazenando a escrita do usuario
	
		system("cls"); //limpa a tela
	 
	 		switch(opcao){//inicio do menu 
			case 1:
			registro();
			break;
			
			case 2:
			consulta();
			break;
			
			case 3:
			deletar();
			break;
			
			case 4:
			printf("Obrigado por utilizar o sistema!\n");
			return 0; //retornando 0 quebramos o sistema e ele sai.
			
			default:
			printf("Digite uma opção valida!\n\n");
			system("pause");
			break;
		} //Fim da seleção
	
			
	}
	
}
