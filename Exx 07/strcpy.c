
#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    char letraNova, letraModifica;

    printf("A palavra é: %s Se deseja modificar uma letra, qual seria? ", palavra);
    scanf(" %c", &letraModifica);

    printf("Por qual letra quer substituir? ");
    scanf(" %c", &letraNova);
    
    char palavraNova[strlen(palavra) + 1];
    strcpy(palavraNova, palavra);
    
    for (int i = 0; i < strlen(palavra); i++) {
        if (letraModifica == palavra[i]) {
            palavraNova[i] = letraNova; 
            printf("Palavra modificada: %s\n", palavraNova);
        }
    }
    
    

    return 0;
}


