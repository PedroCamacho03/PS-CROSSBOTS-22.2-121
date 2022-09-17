#include <stdio.h>
#include <math.h>

//definindo o valor de pi pois sera usado na transformada de radianos em graus
#define PI 3.14159265  

float anguloABC(int A[2], int B[2], int C[2]){
    
    //  v = B->A
    //  u = B->C 
    int v[2], u[2];      
    v[0] = (A[0]-B[0]);          
    v[1] = (A[1]-B[1]);         
    u[0] = (C[0]-B[0]);         
    u[1] = (C[1]-B[1]);        
    

    float prodVetor, modV, modU;      

    // equaçao: <u,v> = xu*xv + yu*yv
    prodVetor = (v[0]*u[0]) + (v[1]*u[1]);   

    //   |v| = sqrt(xv^2 + yv^2)  
    //   |u| = sqrt(xu^2 + yu^2)
    modV = sqrt(pow(v[0], 2) + pow(v[1], 2));         
    modU = sqrt(pow(u[0], 2) + pow(u[1], 2));        

    float cosseno, angulo;      

    // equaçao: cos0 = <u,v>/|u|*|v|
    cosseno = (prodVetor/(modV * modU));    

    angulo = acos(cosseno);  
    
    //transformando o angulo de radianos pra graus
    angulo = (angulo*180)/PI;    
    return (angulo);
}