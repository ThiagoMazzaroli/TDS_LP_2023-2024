
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int idade;
    bool elegivel;

    printf("Digite sua idade:");
    scanf("%d", &idade);

    if(idade >= 18)
    {
        elegivel = true;

    } else if(idade >= 0 && idade < 18){

        elegivel = false;
    }  else{
        printf("idade invalida! \n");
    }
     if (elegivel == true)
    {
        printf("voce pode votar!");

    } else if (elegivel == false){
        printf("voce nao pode votar!");
    }

    return 0;

}