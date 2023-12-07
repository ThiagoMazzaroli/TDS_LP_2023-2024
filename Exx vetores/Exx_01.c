
#include <stdio.h>

int main()
{
    //Vetores
    int a[6] = {1, 0, 5, -2, -5, 7};
    int somaVetor = a[0] + a[1] + a[5];
    
    
    a[4] = 100;
    
    //exibe o valor de cada posição do vetor a
    printf("%d\n %d\n %d\n %d\n %d\n %d\n", a[0], a[1], a[2], a[3], a[4], a[5]  );
    
    //exibe a soma de 3 posições do vetor a
    printf("%d", somaVetor);

    return 0;
}
