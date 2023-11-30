#include <stdio.h>
int main()
{


 float fabricCost;
 float distributorPercentage;
 float tax;
 float finalCost;

 printf("Calculador de custos para consumidor! \n");
 
 printf("Digite o valor de fabrica do carro: ");
 scanf("%f", &fabricCost);

 if (fabricCost < 12000)
 {
  distributorPercentage = fabricCost * 0.05;
  tax = 0;
  finalCost = fabricCost + distributorPercentage;

  printf("O valor final para o consumidor é %.0f", finalCost);
 }

 else if (fabricCost >= 12000 && fabricCost <= 25000)

 {
  distributorPercentage = fabricCost * 0.10;
  tax = fabricCost * 0.15;
  finalCost = fabricCost + distributorPercentage + tax;

  printf("O valor final para o consumidor é %.0f", finalCost);
 }

 else if (fabricCost > 25000)

 {
  distributorPercentage = fabricCost * 0.15;
  tax = fabricCost * 0.20;
  finalCost = fabricCost + distributorPercentage + tax;

  printf("O valor final para o consumidor é %.0f", finalCost);
 }

 return 0;

}









