#include <stdio.h>

int main(){
    char nome[] = "jhon";
    char sobrenome[10] = "Doe";

    printf("Nome %s\n", nome);
    printf("Sobrenome %s\n", sobrenome);

    strcat(nome, " ");
    strcat(nome, sobrenome);

    printf("Nome completo: %s\n", nome);

    int tamanho = strlen(nome);


    return 0;
}
