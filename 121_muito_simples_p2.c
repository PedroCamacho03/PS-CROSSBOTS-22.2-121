#include <stdio.h>

float converte_temperatura(float fahren){

    //formula: C = (F-32)*5/9
    float celsius = ((fahren - 32)*5)/9; 
    
    return (celsius);
}
