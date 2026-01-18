#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//ESSA FUNÇÃO LOCALIZA A PRIMEIRA OCORRÊNCIA NA SEQUÊNCIA APONTADA NA STRING 1 DE QUALQUER CARACTERE
//APONTADO NA SEQUÊNCIA DA STRING 2.



int main(){
    setlocale(LC_ALL, "Portuguese");
    char * NewString = "AB C D E F G ";
    char * String = "  "; //AB NÃO SERÁ EXIBIDO!
    char * resultado = strpbrk(NewString, String);
    if(resultado != NULL){
        printf("%s\n", resultado);

    }
   

}

