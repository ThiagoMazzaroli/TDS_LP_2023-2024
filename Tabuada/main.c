#include <stdio.h>

int main(){

    int total = 0;
    int resultado[11];

    //for que exibe a quantidade de tabuadas a serem mostradas, nesse caso até 10
    for(int tabuNum=1; tabuNum <=10; tabuNum++ ){

        resultado[tabuNum] = 0;
        int calc = 0;
        
        printf("TABUADA %d\n  ", tabuNum);
        
        //for que exibe os resultados das tabuadas individualmente
        for(int i=1; i <=10; i++ ) {
            
            calc = tabuNum * i;

            printf("\n %d X %d = %d", tabuNum, i, calc);

            //faz o calculo da soma das tabuadas
            resultado[tabuNum] = resultado[tabuNum] + calc;
            total = total + calc;
        }
        
        //exibe o total da soma de cada tabuada
        printf(" \n TOTAL = %d\n \n", resultado[tabuNum], tabuNum);
    }
    
    //exibe a soma total de todas as tabuadas
    printf("Valor total das soma deu: %d\n", total);

    return 0;
}