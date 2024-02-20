
#include <stdio.h>

int main()
{
    int num;
    double fatorial = 1.0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num < 0){
        printf("numero invalido!");
    }else{
        for(int i = 1; i <= num; i++){
            
            fatorial *= i;
            printf(" o fatorial é : %.2f\n", fatorial);
            
        }
    
            
        
    }

    return 0;
}