
#include <stdio.h>

int main()
{
    
    int vetor[10];
    int maiorValor;
    int menorValor;
    
    printf("Digite um numero:");
    scanf("%d", &vetor[0]);
    
    menorValor = maiorValor = vetor[0];
    
    for(int i = 0; i <= 9; i++){
    printf("\nDigite mais um numero: ");
    scanf("%d", &vetor[i]);
    
   
    if (vetor[i] <= menorValor) 
    {
            menorValor = vetor[i];
    }
    
        
     if (vetor[i] > maiorValor)
     {
            maiorValor = vetor[i];
        
     }
    }
    
    printf("\n%d é o maior valor \n", maiorValor);
     printf("%d é o menor valor", menorValor);

    



    

    return 0;
}