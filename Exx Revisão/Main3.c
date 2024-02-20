
#include <stdio.h>

int main()
{
    int num1, num2;
    int operador;
    int resultado;
    
    printf("Bem vindo a calculadora online \n ----------------------------- \n");
    printf("Digite um numero para o calculo:");
    scanf("%d", &num1);
    
    printf("Digite outro numero para o calculo:");
    scanf("%d", &num2);
    
    printf("escolha um operador de acordo com a tabela \n 1 para +\n 2 para -\n 3 para x\n 4 para /\n digite:");
    scanf("%d", &operador);
    
    switch (operador) {
  case 1:
     resultado = num1 + num2;
    printf("o resultado é %d", resultado);
    break;
  case 2:
     resultado = num1 - num2;
    printf("o resultado é %d", resultado);
    break;
  
  case 3:
     resultado = num1 * num2;
    printf("o resultado é %d", resultado);
    break;
    
  case 4:
      resultado = num1 / num2;
    printf("o resultado é %d", resultado);
    break;
    
  default:
    printf("operador invalido!");
  break;
}

    return 0;
}
