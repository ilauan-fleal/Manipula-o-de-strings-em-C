#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#include <time.h>
#define DIM 300


void TransformaParaCaracteresAleatoriamente(char * origem, char * destino){
  
    int i, j;
    srand((unsigned)time(NULL));
   
 
    for(j = 0; origem[j] != '\0' ; j++){
        
        i = rand() % strlen(origem);
        if(i % 2 == 0){
            destino[j] = toupper(origem[j]);

        }else{
            destino[j] = tolower(origem[j]);
        }
        
    }
    //AQUI MARCA-SE O FIM DA STRING
    destino[j] ='\0';


}




int main(){
    setlocale(LC_ALL, "Portuguese");
    char String[DIM];
    char NovaString[DIM];
    char * ponteiro = String;
    printf("Digite uma string e os seus caracteres serão modificados para maiúsculos e minúsculos, aleatoriamente\n");
    fgets(String, sizeof(String), stdin);
    TransformaParaCaracteresAleatoriamente(ponteiro, NovaString);
    printf("A nova string gerada: %s\n", NovaString);



}


