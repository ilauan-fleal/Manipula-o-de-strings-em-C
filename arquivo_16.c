#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define DIMENSION 40


//A FUNÇÃO A SEGUIR ACHA A PRIMEIRA OCORRÊNCIA DO CARACTERE 'CH' PRESENTE NA STRING E DEVOLVE
//O ENDEREÇO DA OCORRÊNCIA OU NULL



int main(){
    char String[DIMENSION] = "Uma String para verificar";
    char * ponteiro = (char*)memchr(String, 'S', sizeof(String));
    //SE PONTEIRO É DIFERENTE DE NULL, SIGNIFICA QUE O DADO FOI ENCONTRADO!
    if(ponteiro != NULL){
        printf("O dado foi encontrado!\n");
        printf("%s\n", ponteiro);
    }




}
