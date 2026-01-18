#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//CONTINUANDO A EXPLORAR MÉTODOS DE MANIPULAÇÃO DE STRINGS EM C!

int main(){
    //O CÓDIGO A SEGUIR IRÁ COMPARAR O TAMANHO DE DUAS STRINGS!

    char String1[] = "ABCDEEFGHIJKLMNOPQRStuvxz";
    char String2[] = "KALKDISSIFJSPFPASKFDPASKFISSSSSSSFEFA";
    int resultado = strcmp(String1, String2);
    //SE A PRIMEIRA FOR MENOR DO QUE A SEGUNDA, UM VALOR NEGATIVO SERÁ RETORNADO!
    printf("%d", resultado);


}