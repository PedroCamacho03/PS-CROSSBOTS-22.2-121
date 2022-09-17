#include <stdio.h>

int main(){

    //em ordem: 2 indices auxiliares, numero de jogos, indice para saber qual jogo esta
    int i, j, N, jogo;

    //scan numero de jogos e cria o vetor com os resultados 
    scanf("%d", &N);
    int diamantes[N];

    //para repetir no numero de jogos
    for(jogo=0; jogo<N; jogo++){

        //declara o campo de teste a ser lido 
        char teste[1000];

        //anula o resultado antes de cada jogo
        diamantes[jogo]=0;

        //scan do campo de teste
        scanf("%s", teste);

        //passa pela string porcurando '<'
        for(i=0; teste[i]!='\0'; i++){
            if(teste[i]=='<'){

                //passa pela string(1 casa depois do '<') procurando '>'
                for(j=i+1; teste[j]!='\0'; j++){
                    if(teste[j]=='>'){

                        //aumenta o numero de diamantes no jogo em 1 e torna as duas partes
                        //em areia '.', para nao atrapalhar na procura de outros
                        diamantes[jogo]++;
                        teste[i]='.';
                        teste[j]='.';
                        break;
                    }
                }
            }
        }
    }

    //imprime os resultados
    for(i=0;i<N;i++){
        printf("%d\n", diamantes[i]);
    }
    return 0;
}
