#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#include <time.h>
#define DIM 300


char * DuplicataDeString(char  *String1 , char * String2){
 
    int x, y = 0;
    for(x = 0 ; String1[x] != '\0'; x++){
        
            String2[y] = String1[x];
            String2[y + 1] = String1[x];
            y += 2;


    
    }
    //ESSA FUNÇÃO DEVERÁ RETORNAR UM PONTEIRO!
    return String2;
   
}



int main()
{
    char String1[DIM] = "Delta";
    char String2[DIM];
    printf("A nova String: %s\n" , DuplicataDeString(String1, String2));
    
}

