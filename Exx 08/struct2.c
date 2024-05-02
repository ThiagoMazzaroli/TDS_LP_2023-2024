
#include <stdio.h>
#include <string.h>


struct Produto {
    char nome[50];
    float preco;
    int quantidade;
};



int main()
{
    struct Produto produto;
    
    printf("Digite o nome do produto: ");
    scanf("%s", produto.nome);
    
    printf("Digite o preço: ");
    scanf("%f", &produto.preco);
    
    printf("Digite a quantidade do produto: ");
    scanf("%d", &produto.quantidade);
    
    printf("Dados do produto\n ");
    
    printf("Nome %s\n ", produto.nome);
    printf("preço %.2f\n ", produto.preco);
    printf("quantidade %d\n ", produto.quantidade);
    return 0;
}
