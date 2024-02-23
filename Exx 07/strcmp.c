#include <stdio.h>
#include <string.h>


int main(){
    char palavra1[20];
    char palavra2[20];
    
    printf("Digite uma palavra: ");
    scanf("%s", &palavra1);

    printf("Digite outra palavra: ");
    scanf("%s", &palavra2);
    
    if(strcmp(palavra1, palavra2) == 0){
        printf("são iguais");
    } else{
        printf("não são iguais");
    }




    return 0;
}