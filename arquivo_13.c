#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define DIMENSION 40

//ESSA FUNÇÃO SERVE PARA INSERIR O CARACTERE 'CH' NAS N PRIMEIRAS POSIÇÕES DA PRIMEIRA STRING

int main(){
    
    char NewString[DIMENSION];
    memset(NewString, 'Y', sizeof(NewString));
    printf("%s", NewString);
   

}
