#include <stdio.h>
#include <string.h>

int main(){
    char nome[20];
    char sobrenome[20];

    
    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("Digite seu sobrenome: ");
    scanf("%s", &sobrenome);
    strcat (nome, " ");
    strcat (nome, sobrenome);
    printf("seu nome completo é %s ", nome);



    return 0;
}