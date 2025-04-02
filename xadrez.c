#include <stdio.h>

int main(){

    int r;
    int i = 1;
//torre//  
    for (int t = 0; t < 5; t++)
    {
        printf("direita\n");
    }
//rainha//
   do
    {
       printf("esquerdo\n");
       r++;
    } while (r <= 8);
//bispo//
    while (i <= 5)
    {
        printf("Cima, Direita\n", i);
        i++;
    }
    
       
    return 0;
}