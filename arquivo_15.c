#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define DIMENSION 40

//A FUNÇÃO A SEGUIR COMPARA N CARACTERES DE AMBAS AS STRINGS!



int main(){
    char String[DIMENSION] = "ABCDEFGHIJKLMNOPQRSTUVXWYZM";
    char NewString[DIMENSION] = "ESSE PARTE DE UM EXEMPLO";
    int resultado;
    resultado = memcmp(String, NewString, 1);
    printf("%d\n", resultado);
 
    
}
