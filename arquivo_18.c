#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#define DIM 100


//ESSA FUNÇÃO IRÁ INDICAR QUANTOS CARACTERES REPETIDOS ESTÃO PRESENTES NA STRING!


void VerificaCaracterRepetido(char * String){
    int repete = 0, x, y;
    char repeticao[DIM] = " ";
    //AQUI SERÃO VERIFICADAS AS CONDIÇÕES!!
    for(x = 1; String[x] != '\0'; x++){
        for(y = x + 1; String[y] != '\0'; y++){
            if(String[x] == String[y]){
              
                    repeticao[repete] = String[x];
                    repete++;
             
               
            }
        }
    }

    //CÓDIGO PARA EXIBIR TODOS OS CARACTERES
    for(int n = 0; n < repete; n++){
        printf("O caracter repetido é: %c", repeticao[n]);

    }



}

//BLOCO MAIN

int main(){
    setlocale(LC_ALL, "Portuguese");
    char String[DIM];
    char * ponteiro = String;
    printf("Insira uma String:\n");
    //ESSA FUNÇÃO ABAIXO DEVERÁ RECEBER UMA STRING!
    fgets(String, sizeof(String), stdin);
    //AGORA, EM SEGUIDA, DEVERÁ SER CHAMADA A FUNÇÃO
    VerificaCaracterRepetido(ponteiro);



}



