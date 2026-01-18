#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//AQUI IREMOS RETORNAR O TAMANHO MÁXIMO DO PRIMEIRO SEGMENTO DE UMA STRING QUE NÃO ESTÁ CONTIDA EM OUTRA:

int main(){
    char * NewString = "XXXXXXXXXXXXXXXYYYYYYYYYYYYYYYYYYYYYYYYY";
    char * OutraString = "ABCDEDFEPINEPIGPSDPMGPSDGYAYTTAYTAUAJAJAJAJA";
    int resultado = strcspn(NewString, OutraString);
    printf("%d", resultado);



}

