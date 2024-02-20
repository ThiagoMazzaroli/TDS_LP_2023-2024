
int main()
{
    char valor = 'A';
    int valor2 = 1;
    float valor3 = 3.50;
    double valor4 = 4.5000;

    printf("valor: %c\n",  valor);
    printf("valor2: %d\n",  valor2);
    printf("valor3: %f\n",  valor3);
    printf("valor4: %f\n",  valor4);

    int valorDigitado = 0;
    printf("Ola, digite um valor do tipo INT: ");
    scanf("%d", &valorDigitado);
    printf("O valor digitado foi: %d", valorDigitado);

    return 0;
}