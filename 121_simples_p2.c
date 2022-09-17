#include <stdio.h>

int perfeito(int num){

    int i, somaDiv = 0; 
    for(i=1; i<num; i++){    
        
        //teste se i eh divisor de num
        if((num % i) == 0){    
            somaDiv += i;    
        }
    }

    //teste final (se num eh perfeito)
    if(somaDiv == num){     
        return 1;   
    }else{
        return 0; 
    }
}
