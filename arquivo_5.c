#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//AQUI IREMOS RETORNAR O TAMANHO MÁXIMO DO PRIMEIRO SEGMENTO DE UMA STRING CONTIDA EM OUTRA:

int main(){
    char * NewString = "ABCDEDFEPINEPIGPSDPMGPSDG";
    char * OutraString = "ABCDEDFEPINEPIGPSDPMGPSDGYAYTTAYTAUAJAJAJAJA";
    int resultado = strspn(NewString, OutraString);
    printf("%d", resultado);



}

