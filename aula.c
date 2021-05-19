#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//*********BANCO DE DADOS***********//

typedef struct Aluno
{
    char nome[50];
    char endereco[100];
    int idade;
    char cpf[12];
    float altura;
    float peso;
}Aluno;

void cadastro(Aluno *aluno){
    printf("entre com o nome do aluno\n");
    scanf("%s", aluno->nome);
    printf("entre com o endereco\n");
    scanf(" %[^\n]s", aluno->endereco);
    printf("entre com o idade\n");
    scanf("%d", &aluno->idade);
    printf("entre com o endereco\n");
    scanf("%s", aluno->cpf);
    printf("entre com a altura\n");
    scanf("%f", &aluno->altura);
    printf("entre com o peso\n");
    scanf("%f", &aluno->peso);
    fflush(stdin);//FRESCURA DO PROFESSOR
    printf("pressione um tecla para continuar...");//FRESCURA DO PROFESSOR
    getchar();//FRESCURA DO PROFESSOR
    system("cls");//FRESCURA DO PROFESSOR

}


int main()
{
    struct Aluno a1;
    printf("entre com o nome do aluno\n");
    scanf("%s", &a1.nome);
    printf("entre com o endereco\n");
    scanf(" %[^\n]s", &a1.endereco);
    printf("entre com o idade\n");
    scanf("%d", &a1.idade);
    printf("entre com o endereco\n");
    scanf("%s", &a1.cpf);
    printf("entre com a altura\n");
    scanf("%f", &a1.altura);
    printf("entre com o peso\n");
    scanf("%f", &a1.peso);
//khjljlk
    return 0;
}