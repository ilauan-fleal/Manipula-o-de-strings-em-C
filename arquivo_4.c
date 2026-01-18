#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//AQUI IREMOS EXPLORAR UMA FUNÇÃO, PARA RETORNAR A ÚLTIMA OCORRÊNCIA DE CH, NA PRIMEIRA STRING!

int main(){
    char * NewString = "ABCDEFGHIJKLMNOAASSSSSSPQRSTUVXZWYXZPDOJSJFPAS";
    char * Resultado = strrchr(NewString, 'S');
    while(Resultado != NULL){
        printf("Encontrado em %d\n", Resultado - NewString + 1);
        Resultado = strrchr(Resultado+1, 'S');
    }


}

