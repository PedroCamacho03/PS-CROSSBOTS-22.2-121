#include <stdio.h>
#include <stdlib.h>

//recebe a lista onde serao removidos os numeros e uma lista vazia para guardar os numeros que nao repetem
void tira_repetidos(int *lista, int *listaNova){

    int i, j, k=0, tam=(sizeof(lista)/sizeof(int));

    //auxiliar para detectar repetiçao
    int rept;

    for(i=0; i<tam; i++){
        
        //resetado a cada novo numero
        rept=0;
        
        //passa por todos os numeros seguintes procurando repetiçao
        for(j=i+1; j<tam; j++){
            if(lista[i]==lista[j]){
                rept=1;
            }
        }

        //se nao houver repetiçao, grava na lista nova
        if(rept==0){
            listaNova[k]=lista[i];
            k++;
        }
    }
}
