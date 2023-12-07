
#include <stdio.h>

int main()
{
    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    
    for(int i = 0; i <= 9; i++)
    {
        if(vetor[i] % 2 == 0)
        {
            printf("o numero %d é PAR \n", vetor[i]);
        }
        else
        {
           printf("o numero %d é impar \n", vetor[i]); 
        }
    }

    return 0;
}
