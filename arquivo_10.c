#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define DIMENSION 40

//ESSA FUNÇÃO COPIA N TERMOS DA STRING 2, NA STRING 1

int main(){
    char String[DIMENSION] = "NEW TEXT";
    char NewString[DIMENSION] = "NEW TEXT";
    char * resultado;
    resultado = strncpy(String, NewString, 3);
    printf("%s\n", String);


}
