#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//AQUI IREMOS EXPLORAR UMA FUNÇÃO PARA RETORNAR A PRIMEIRA OCORRÊNCIA DE UM CARACTERE CH NUMA STRING!


int main(){
    char *String = "AAAAAABDDEJKDFNDONPOSDPSAAAAAAAADPGNS";
    
    char* resultado = strchr(String, 'A');
    while(resultado != NULL){
      printf("Encontrado em %d\n", resultado - String + 1);
      resultado = strchr(resultado+1, 'A');


    }
    


}
