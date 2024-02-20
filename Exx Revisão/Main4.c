
#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Digite um numero :");
    scanf("%d", &num1);
    printf("Digite um outro numero:");
    scanf("%d", &num2);

    if(num1 > num2 ){
        printf("numero 1 maior");
    }else if(num1 < num2){
        printf("numero 2 maior");
    }else{
        printf("os numeros são iguais");
    }

    return 0;

}