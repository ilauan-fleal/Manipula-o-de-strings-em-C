#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define DIMENSION 40

//ESSA FUNÇÃO CONCATENA N ELEMENTOS DA STRING 2 NA STRING 1


int main(){
    char NewString[DIMENSION] = "  ";
    char String[DIMENSION] = "New Value";
    char * ValorResultante;
    ValorResultante = strncat(NewString, String, 3);
    printf("%s\n", NewString);




}

