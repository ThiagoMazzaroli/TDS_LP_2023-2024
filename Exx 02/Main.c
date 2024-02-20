

int main()
{
    float valorProduto;
    
    printf("Digite o valor do seu produto: ");
    scanf("%f", &valorProduto);
    
    if(valorProduto <= 50){
   
        float aumento1 = valorProduto * 0.05;
        float valorFinal1 = valorProduto + aumento1;
        printf("O valor final dos eu produto ficou: %.2f ", valorFinal1);
        
    }
    
    else if (valorProduto >= 50 && valorProduto <= 100){
        
        float aumento2 = valorProduto * 0.10;
        float valorFinal2 = valorProduto + aumento2;
        printf("O valor final dos eu produto ficou: %.2f ", valorFinal2);
        
    }
    
    else if(valorProduto > 100){
        
        float aumento3 = valorProduto * 0.15;
        float valorFinal3 = valorProduto + aumento3;
        printf("O valor final dos eu produto ficou: %.2f ", valorFinal3);
        
    }
    
    
    
    

    return 0;
}
