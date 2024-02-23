#include <stdio.h>
#include <string.h>

int main(){
    char frase1[20];
    char frase2[20];

    
    printf("Digite uma frase: ");
    scanf("%s", &frase1);
    printf("Digite outra frase: ");
    scanf("%s", &frase2);
    
    while(getchar() != '\n');

    strcat (frase1, frase2);
    printf("a juncao das palavras e %s ", frase1);



    return 0;
}