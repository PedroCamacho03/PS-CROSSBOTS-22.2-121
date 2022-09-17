#include <stdio.h>
#include <math.h>

float distancia(int p1[2],int p2[2]){
  
    //formula: d^2 = dx^2 + dy^2
    float dist =(pow((p1[0]-p2[0]), 2)+pow((p1[1]-p2[1]),2)); 
    
    return sqrt(dist);
}