#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define DIMENSION 40


//A FUNÇÃO A SEGUIR COPIA N VALORES PARA A STRING DE DESTINO!

int main(){
    char String[DIMENSION] = " VEJA: ";
    char NewString[DIMENSION] = "String mais elaborada";
    memcpy(NewString, String, 0);
    printf("%s", NewString);

}

