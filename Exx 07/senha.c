#include <stdio.h>
#include <string.h>




int main(){
    char senha[20];
    char senhaCorreta[] = "segredo";
    
    printf("Digite sua senha: ");
    scanf("%s", &senha);
    
    if(strcmp(senha, senhaCorreta) == 0){
        printf("acesso permitido");
    } else{
        printf("acesso negado");
    }




    return 0;
}