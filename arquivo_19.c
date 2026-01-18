#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#define DIM 100


char* EliminarCaractereRepetido(char * String){
    char Repeticao[DIM] = " ";
    int x, y;
    for(x = 1 ; String[x] != '\0'; x++){
        for(y = x + 1; String[y] != '\0'; y++){
            if(String[x] == String[y]){
                    String[y] = ' ';
                    String[x] = ' ';
            }
        }

    }
    return String;
   
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    char String[DIM];
    char * ponteiro = String;
    printf("Digite uma string, e verá que os caracteres repetidos serão eliminados!\n");
    fgets(String, sizeof(String) , stdin);
    printf("A nova string é %s\n", EliminarCaractereRepetido(ponteiro));



}