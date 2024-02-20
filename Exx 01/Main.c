
int main()
{
    float nota1;
    float nota2;
    float media;
    
    printf("Digite sua primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Digite sua segunda nota: ");
    scanf("%f", &nota2);
    
    media = (nota1 + nota2) / 2;
    
    if (media >= 0 && media <= 10)
{
        
    printf("sua média é: %.2f", media);
    
} 
    else
{
    printf("media invalida, insira uma nota valida");
    
}
    return 0;
}