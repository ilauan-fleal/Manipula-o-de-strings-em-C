#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define DIMENSION 40

//ESSA FUNÇÃO CONCATENA ELEMENTOS DA STRING 2 AO FINAL DA STRING 1

int main(){
    char NewString[DIMENSION] = "      ";
    char String[DIMENSION] = "new text";
    char * resultado;
    resultado = strcat(NewString, String);
    printf("%s\n", NewString);

}
