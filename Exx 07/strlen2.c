#include <stdio.h>
#include <string.h>

int main(){
    char palavra[20];
    
    printf("Digite seu nome: ");
    scanf("%s", &palavra);
    
    int tamanho = strlen(palavra);

    if(tamanho < 5){
        printf("nome invalido!");
    }else{
        printf("nome valido!");
    }



    return 0;
}