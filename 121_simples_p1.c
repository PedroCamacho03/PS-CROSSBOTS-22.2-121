#include <stdio.h>

int main(){
    int i, lista[10], x, y, soma;
    printf("Lista= ");

    //scaniando a lista
    for(i=0; i<10; i++){            
        scanf("%d", &lista[i]);   
    }                             
    
    //scaniando x
    printf("Digite x: ");
    scanf("%d", &x);  
    
    //scaniando y
    printf("Digite y: ");    
    scanf("%d", &y); 
    
    //realizando a soma
    soma = lista[x-1]+lista[y-1];
    
    //imprimindo resultado
    printf("Soma= %d", soma);
    return 0;
}
