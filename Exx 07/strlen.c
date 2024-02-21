#include <stdio.h>
#include <string.h>

int main(){
    char palavra[20];
    
    printf("Digite sua palavra: ");
    scanf("%s", &palavra);
    
    int tamanho = strlen(palavra);
    printf("a sua palavra tem %d caracteres", tamanho);



    return 0;
}