
#include <stdio.h>
#include <string.h>


struct Aluno {
    char nome[50];
    int idade;
    float nota;
};



int main()
{
    struct Aluno aluno;
    
    printf("Digite o nome: ");
    scanf("%s", aluno.nome);
    
    printf("Digite a idade: ");
    scanf("%d", &aluno.idade);
    
    printf("Digite a nota: ");
    scanf("%f", &aluno.nota);
    
    printf("Dados do aluno\n ");
    
    printf("Nome %s\n ", aluno.nome);
    printf("idade %d\n ", aluno.idade);
    printf("nota %.2f\n ", aluno.nota);
    return 0;
}
