#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char String[] = "ABCDEFGHIJKLMNOPQRSTUVXWYZ";
    int contador;
    char * ponteiro = String;
    //AQUI PROVA-SE QUE É POSSÍVEL UTILIZAR UM PONTEIRO, PARA PERCORRER UMA STRING EM C!

    //AQUI ESTÁ SENDO UTILIZADO O MÉTODO PARA RETORNAR O COMPRIMENTO DE UMA STRING!
    
    for(contador = 0; contador < strlen(String); contador++){
        printf("%c", *ponteiro);
        ponteiro++;
    }    


}

