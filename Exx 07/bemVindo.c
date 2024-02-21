#include <stdio.h>
#include <string.h>

int main(){
    char nome[20];

    
    printf("Qual seu nome: ");
    scanf("%s", &nome);

    printf("Bem vindo %s", nome);

    return 0;
}