#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#define DIM 1000

//OBSERVEMOS AS SEGUINTES FUNÇÕES:



//ESSA FUNÇÃO TRANSFORMA OS CARACTERES MINÚSCULOS, PARA OS MAIÚSCULOS

void TransformaParaCaracteresMaiusculos(char * origem, char * destino){
  
    int i;
    for(i = 0; origem[i] != '\0' ; i++){
        destino[i] = toupper(origem[i]);
    }
    //AQUI MARCA-SE O FIM DA STRING
    destino[i] ='\0';


//ESSA FUNÇÃO RETORNARÁ UM PONTEIRO

 

}

//ESSA FUNÇÃO IRÁ TRANSFORMAR OS CARACTERES MAIÚSCULOS, PARA MINÚSCULOS

void TransformaParaCaracteresMinusculos(char * origem, char * destino){
    int i;
    for( i = 0; origem[i] != '\0'; i++){
        destino[i] = tolower(origem[i]);
      

    } 
    //AQUI MARCA-SE O FIM DA STRING
    destino[i] = '\0';
  

  
//ESSA FUNÇÃO RETORNARÁ UM PONTEIRO
}

//ESSA FUNÇÃO IRÁ CONTABILIZAR O NÚMERO DE VEZES QUE UM CARACTERE APARECE EM UMA STRING

int QuantasVezesApareceOcaractere(char * String1, char Caractere){
    int repeticao = 0;
    for(int i = 0; i < strlen(String1); i ++){
        if(String1[i] == Caractere){
            repeticao++;
        }

    }
//ESSA FUNÇÃO DEVERÁ RETORNAR UM VALOR INTEIRO
    return repeticao;

}

void EliminarOcorrenciaDeCaractere(char * String1, char caractere){
    for(int i = 0; String1[i] != '\0'; i++){
        if(String1[i] == caractere){
            String1[i] = ' ';
        }
    }
}



//VALIDANDO FUNÇÕES

int main(){
    setlocale(LC_ALL, "Portuguese");
    char String[DIM] = "Isso";
    char Destino[1000];
    char d = 's';
    
    printf("A quantidade de vezes, que o caractere aparece na string é: %d\n", QuantasVezesApareceOcaractere(String, d));
    TransformaParaCaracteresMaiusculos(String, Destino);
    printf("%s\n", Destino);
    TransformaParaCaracteresMinusculos(String, Destino);
    printf("%s\n", Destino);
    EliminarOcorrenciaDeCaractere(String, d);
    printf("Nova string %s\n", String);
   
    
  
}