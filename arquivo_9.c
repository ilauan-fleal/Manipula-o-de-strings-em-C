#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define DIMENSION 40


//ESSA FUNÇÃO COPIA A STRING 2 PARA A STRING 1 E DEPOIS RETORNA UM PONTEIRO PARA A STRING 1

int main(){
    char String[DIMENSION] = " ";
    char NovaString[DIMENSION] = "NEW TEXT";
    char * resultado;
    resultado = strcpy(String, NovaString);
    printf("%s\n", resultado);

}

