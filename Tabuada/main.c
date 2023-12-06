#include <stdio.h>

int main(){

    int total = 0;
    int resultado[11];

    //for que exibe a quantidade de tabuadas a serem mostradas, nesse caso até 10
    for(int b=1; b <=10; b++ ){

        resultado[b] = 0;
        int calc = 0;
        
        printf("TABUADA %d\n  ", b);
        
        //for que exibe os resultados das tabuadas individualmente
        for(int p=1; p <=10; p++ ) {
            
            calc = b * p;

            printf("\n %d X %d = %d", b, p, calc);

            //faz o calculo da soma das tabuadas
            resultado[b] = resultado[b] + calc;
            total = total + calc;
        }
        
        //exibe o total da soma de cada tabuada
        printf(" \n TOTAL = %d\n \n", resultado[b], b);
    }
    
    //exibe a soma total de todas as tabuadas
    printf("Valor total das soma deu: %d\n", total);

    return 0;
}