
#include <stdio.h>
#include <string.h>


struct Pessoas {
    char nome[50];
    int idade;
};

struct Enderecos {
    char rua[50];
    int numero;
};



int main()
{
    struct Pessoas pessoa;
    struct Enderecos endereco;
    
    printf("Digite o seu nome: ");
    scanf("%s", pessoa.nome);
    
    printf("Digite a sua idade: ");
    scanf("%d", &pessoa.idade);
    
    printf("sua rua: ");
    scanf("%s", endereco.rua);

    printf("numero da casa: ");
    scanf("%d", &endereco.numero);
    
    printf("\nDados da pessoa\n ");
    
    printf("Nome %s\n ", pessoa.nome);
    printf("idade %d\n ", pessoa.idade);

    printf("\nDados do endereço\n ");

    printf("rua %s\n ", endereco.rua);
    printf("numero  %d\n ", endereco.numero);
    return 0;
}
