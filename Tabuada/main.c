#include <stdio.h>

int main()
{
     
    int multi;
    
    
    
    for(int num = 1; num <= 10; num++)
    {
        
        printf("TABUADA %d\n", num);
        
        for(int i= 1; i <= 10; i++){
        
        multi = num * i;
        printf("Tabuada: %d * %d = %d\n", num, i, multi);
        

        }
    }
    
    
    

    return 0;
}
