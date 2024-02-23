#include <stdio.h>
#include <string.h>

int main(){
    char frase[100];
    
    printf("Digite uma frase: ");
    scanf("%[^\n]", &frase);
    
    while(getchar() != '\n');
    
    int ContadorEspacos = 1;


   for (int i = 0 ;i<strlen(frase);i++){
       
   if(frase[i] == ' ' && frase[i -1] != ' '){
       
   ContadorEspacos++;
   
   }

   }
 


   printf("tem %d frases", ContadorEspacos);


    return 0;
}