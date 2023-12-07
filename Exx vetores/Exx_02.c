
#include <stdio.h>

int main()
{
    
    int vetor[8];
    int total;
    
    
    
    for(int i = 1; i <= 8; i++){
        
    printf("\nDigite 8 numeros: ");
    scanf("%d", &vetor[i]);
    
    }
    
    total = vetor[4] + vetor[5];
    printf("O valor da soma das posições 5 e 6 do vetor é: %d", total);

    return 0;
}                                
