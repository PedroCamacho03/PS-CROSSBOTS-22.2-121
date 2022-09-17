#include <stdio.h>
#include <stdlib.h>

int encontra_letra(char letra, char* frase){
    
    int contador = 0, i;             

    for(i=0; frase[i]!='\0'; i++){    

        //detecta a letra em minusculo(tolower) e maiusculo(toupper)
        if(frase[i]==tolower(letra) || frase[i]==toupper(letra)){   
           
            contador++;                                                                     
        }
    }
    return contador;   
}
