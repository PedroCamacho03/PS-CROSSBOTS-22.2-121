#include <stdio.h>


void encontra_primo(int *lista, *listaPrimos){                          
    int i, div, somaDiv;                 
    int j=0;

    //para testar em todos os numeros da lista
    for(i=0; i<(sizeof(lista)/sizeof(lista[0])); i++){    

        //soma todos os divisores do numero, voltando a 0 para cada novo numero
        somaDiv = 0;                                        
        for(div=1; div<=lista[i]; div++){                  
            if((lista[i]%div)==0){                        
                somaDiv += div;                          
            }
        }
        if(somaDiv==(lista[i]+1)){                  
            listaPrimos[j]=lista[i];               
            j++;                                  
        }
    } 
}