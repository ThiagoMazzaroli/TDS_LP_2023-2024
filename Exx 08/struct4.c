
#include <stdio.h>
#include <string.h>


struct Clientes {
    char nome[50];
    int idade;
    
    struct Enderecos {
    char rua[50];
    int numero;
}endereco;

};




int main()
{
    struct Clientes cliente;
 
    
    printf("Digite o seu nome: ");
    scanf("%s", cliente.nome);
    
    printf("Digite a sua idade: ");
    scanf("%d", &cliente.idade);
    
    printf("sua rua: ");
    scanf("%s", cliente.endereco.rua);

    printf("numero do cliente: ");
    scanf("%d", &cliente.endereco.numero);
    
    printf("\nDados do cliente\n ");
    
    printf("Nome %s\n ", cliente.nome);
    printf("idade %d\n ", cliente.idade);

    printf("\nDados do endereço\n ");

    printf("rua %s\n ", cliente.endereco.rua);
    printf("numero cliente %d\n ", cliente.endereco.numero);
    return 0;
}
