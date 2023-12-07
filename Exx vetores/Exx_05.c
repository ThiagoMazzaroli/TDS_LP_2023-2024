
#include <stdio.h>

int main()
{
    
    int vetor[10];
    int maiorValor, menorValor;
    int maiorPos = 1, menorPos;
    
    printf("Digite um numero:");
    scanf("%d", &vetor[0]);
    
    menorValor = maiorValor = vetor[0];
    
    for(int i = 0; i <= 9; i++){
    printf("\nDigite mais um numero: ");
    scanf("%d", &vetor[i]);
    
   
    if (vetor[i] <= menorValor) 
    {
            menorValor = vetor[i];
            menorPos = i;
    }
    
        
     if (vetor[i] > maiorValor)
     {
            maiorValor = vetor[i];
            maiorPos = i;
            
        
     }
    }
    
    printf("\n%d é o maior valor, e %d é a sua posição\n", maiorValor, maiorPos);
     printf("%d é o menor valor, e %d é a sua posição", menorValor, menorPos);

    



    

    return 0;
}