#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
struct atendimento
{
	char cpf[15];
	char nome[50];
	char sexo;
	int idade;
};

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	struct atendimento paciente;
	FILE *arquivo;
	char op;
	int soma=0;
	
	arquivo = fopen("arquivo.txt", "a");
	if(arquivo == NULL)
	{
		printf("O arquivo não foi aberto. Ocorreu um erro!\n");
	}
	else
	{
		printf("Cadastro Inicial\n");
	
		printf("\nDigite seu CPF\n");
		gets(paciente.cpf);
		fflush(stdin);
	
		printf("Digite seu nome\n");
		gets(paciente.nome);
		fflush(stdin);
	
		printf("Digite seu sexo\nM - Masculino ou F - Feminino\n");
		scanf("%c", &paciente.sexo);
		fflush(stdin);
	
		printf("Digite sua idade\n");
		scanf("%d", &paciente.idade);
		fflush(stdin);
	
		system("cls");
	
		printf("%s\n", paciente.cpf);
		printf("%s\n", paciente.nome);
		printf("%c\n", paciente.sexo);
		printf("%d\n", paciente.idade);
	
		system("pause");
		system("cls");
	
		printf("Triagem inicial\n");
		do
		{
			printf("Tem febre?\nResponda S - Sim ou N - Não\n");
			scanf("%c", &op);
			fflush(stdin);
			system("cls");
			if((op != 'S') && (op != 's') && (op != 'N') && (op != 'n'))
			{
				printf("Por favor, digite apenas S - Sim ou N - Não\n");
			}else{if((op == 's') || (op == 'S'))
					{
						soma = soma + 5;
					}
			}
		}while((op != 'S') && (op != 's') && (op != 'N') && (op != 'n'));
	
	
		do
		{
			printf("Tem dor de cabeça?\nResponda S - Sim ou N - Não\n");
			scanf("%c", &op);
			fflush(stdin);
			system("cls");
			if((op != 'S') && (op != 's') && (op != 'N') && (op != 'n'))
			{
				printf("Por favor, digite apenas S - Sim ou N - Não\n");
			}else{if((op == 's') || (op == 'S'))
				{
					soma = soma + 1;
				}
			}
		}while((op != 'S') && (op != 's') && (op != 'N') && (op != 'n'));
	
	
		do
		{
			printf("Tem secreção nasal ou espirros?\nResponda S - Sim ou N - Não\n");
			scanf("%c", &op);
			fflush(stdin);
			system("cls");
			if((op != 'S') && (op != 's') && (op != 'N') && (op != 'n'))
			{
				printf("Por favor, digite apenas S - Sim ou N - Não\n");
			}else{if((op == 's') || (op == 'S'))
				{
					soma = soma + 1;
				}
			}
		}while((op != 'S') && (op != 's') && (op != 'N') && (op != 'n'));
	
	
		do
		{
			printf("Tem dor/irritação na garganta?\nResponda S - Sim ou N - Não\n");
			scanf("%c", &op);
			fflush(stdin);
			system("cls");
			if((op != 'S') && (op != 's') && (op != 'N') && (op != 'n'))
			{
				printf("Por favor, digite apenas S - Sim ou N - Não\n");
			}else{if((op == 's') || (op == 'S'))
				{
					soma = soma + 1;
				}
			}
		}while((op != 'S') && (op != 's') && (op != 'N') && (op != 'n'));
	
	
		do
		{
			printf("Tem tosse seca?\nResponda S - Sim ou N - Não\n");
			scanf("%c", &op);
			fflush(stdin);
			system("cls");
			if((op != 'S') && (op != 's') && (op != 'N') && (op != 'n'))
			{
				printf("Por favor, digite apenas S - Sim ou N - Não\n");
			}else{if((op == 's') || (op == 'S'))
				{
					soma = soma + 3;
				}
			}
		}while((op != 'S') && (op != 's') && (op != 'N') && (op != 'n'));
	
	
		do
		{
			printf("Tem dificuldade respiratória?\nResponda S - Sim ou N - Não\n");
			scanf("%c", &op);
			fflush(stdin);
			system("cls");
			if((op != 'S') && (op != 's') && (op != 'N') && (op != 'n'))
			{
				printf("Por favor, digite apenas S - Sim ou N - Não\n");
			}else{if((op == 's') || (op == 'S'))
				{
					soma = soma + 10;
				}
			}
		}while((op != 'S') && (op != 's') && (op != 'N') && (op != 'n'));
	
	
		do
		{
			printf("Tem dores no corpo?\nResponda S - Sim ou N - Não\n");
			scanf("%c", &op);
			fflush(stdin);
			system("cls");
			if((op != 'S') && (op != 's') && (op != 'N') && (op != 'n'))
			{
				printf("Por favor, digite apenas S - Sim ou N - Não\n");
			}else{if((op == 's') || (op == 'S'))
				{
					soma = soma + 1;
				}
			}
		}while((op != 'S') && (op != 's') && (op != 'N') && (op != 'n'));
	
	
		do
		{
			printf("Tem diarréia?\nResponda S - Sim ou N - Não\n");
			scanf("%c", &op);
			fflush(stdin);
			system("cls");
			if((op != 'S') && (op != 's') && (op != 'N') && (op != 'n'))
			{
				printf("Por favor, digite apenas S - Sim ou N - Não\n");
			}else{if((op == 's') || (op == 'S'))
				{
					soma = soma + 1;
				}
			}
		}while((op != 'S') && (op != 's') && (op != 'N') && (op != 'n'));
	
	
		do
		{
			printf("Esteve em contato, nos últimos 14 dias, com um caso diagnosticado com COVID-19?\nResponda S - Sim ou N - Não\n");
			scanf("%c", &op);
			fflush(stdin);
			system("cls");
			if((op != 'S') && (op != 's') && (op != 'N') && (op != 'n'))
			{
				printf("Por favor, digite apenas S - Sim ou N - Não\n");
			}else{if((op == 's') || (op == 'S'))
				{
					soma = soma + 10;
				}
			}
		}while((op != 'S') && (op != 's') && (op != 'N') && (op != 'n'));
	
	
		do
		{
			printf("Esteve em locais com grande aglomeração?\nResponda S - Sim ou N - Não\n");
			scanf("%c", &op);
			fflush(stdin);
			system("cls");
			if((op != 'S') && (op != 's') && (op != 'N') && (op != 'n'))
			{
				printf("Por favor, digite apenas S - Sim ou N - Não\n");
			}else{if((op == 's') || (op == 'S'))
				{
					soma = soma + 3;
				}
			}
		}while((op != 'S') && (op != 's') && (op != 'N') && (op != 'n'));
	
	
		printf("Total de pontos: %d\n", soma);
		if(soma <= 9){
			printf("Risco Baixo. Por favor, dirija-se ao setor verde.");
		}else{if(soma >= 20){
			printf("Risco Alto. Por favor, dirija-se ao setor vermelho.");
		}else{
			printf("Risco Médio. Por favor, dirija-se ao setor amarelo.");
			}
		}
		
		fprintf(arquivo, "\n-------------------------------------------\n");	
		fprintf(arquivo, "CPF: %s\n", paciente.cpf);	
		fprintf(arquivo, "Nome: %s\n", paciente.nome);	
		fprintf(arquivo, "Sexo: %c\n", paciente.sexo);	
		fprintf(arquivo, "Idade: %d\n", paciente.idade);	
		fprintf(arquivo, "Pontuação: %d\n", soma);	
		fprintf(arquivo, "-------------------------------------------\n");	
	}
	
	
	fclose(arquivo);
}
