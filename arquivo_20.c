#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#include <time.h>


//OBSERVANDO MODO DE GERAR VALOR ALEATÓRIO EM C!


void GerarValorAleatorio(){
    
    char String[] = "Delta";
    srand((unsigned)time(NULL));
    for(int i = 0; i < 10; i++){
        printf("Valor gerado: %d = %d\n" , rand() % strlen(String), RAND_MAX);

    }


}








int main(){
    setlocale(LC_ALL, "Portuguese");
    GerarValorAleatorio();
   


}
