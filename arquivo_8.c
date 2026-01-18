#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


//ESSA FUNÇÃO LOCALIZA A PRIMEIRA OCORRÊNCIA DA STRING 2 PRESENTE NA STRING 1
//SE A OCORRÊNCIA EXISTIR A STRING 1 DEVERÁ SER IMPRESSA

int main(){
    setlocale(LC_ALL, "Portuguese");
    char * NewString = "HELLO WORLD!";
    char * String = "HELLO";
    char * resultado;
    resultado = strstr(NewString, String);
    printf("%s\n", resultado);



}
