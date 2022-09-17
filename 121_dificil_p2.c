#include <stdio.h>
int main(){
	//o tabuleiro que sera lido
	char tabuleiro[64];
	//o 'valor' de cada casa no jogo
	int jogo[64];
	int i, k, posreiB, posreiP, casaVazia;
	//num de jogos que ele vai ler (ate o tabuleiro vazio)
	int numJogos=0;
	//guarda os resultados
	int resultados[1000];
	//loop para ler os tabuleiros ate o que for vazio
	while(1==1){
		//'limpa' o jogo a cada tabuleiro
        for(i=0;i<64;i++){
	       	jogo[i]=0;
	    }
	    //reseta nro de casas vazias a cada tabuleiro
	    casaVazia=0;
    	//le cada tabuleiro
    	for(i=0;i<8;i++){
		    scanf("%s",&tabuleiro[8*i]);
	    }
	    //a cada 8 linhas, um novo jogo
	    numJogos++;
    	for(i=0;i<64;i++){
    		//le quantas casas estao vazias e onde estao os reis
    	    if(tabuleiro[i]=='.'){
    	        casaVazia++;
    	    }
    	    if(tabuleiro[i]=='k'){
    	        posreiP=i;
    	    }
    	    if(tabuleiro[i]=='K'){
    	        posreiB=i;
    	    }
    	}
    	//termina o processo caso tabuleiro vazio(quebra o loop do while)
    	if(casaVazia==64){
    	    break;
    	}
    	//analisando o tabuleiro e definindo o 'valor' de cada casa no jogo
    	for(i=0;i<64;i++){
    		//movimentos peão preto
    	    if(tabuleiro[i]=='p'){
    	        if(i%8 == 0){
    	            jogo[i+9]=1;
    	        }else if(i%8==7){
    	            jogo[i+7]=1;
    	        }else{
    	            jogo[i+7]=1;
    	            jogo[i+9]=1;
    	        }
    	    }
    	    //movimentos torre preta
    	    if(tabuleiro[i]=='r'){
    	        for(k=i+1; (k/8==i/8)&&((tabuleiro[k]=='.')||(k==posreiB)); k++){
    	            jogo[k]=1;
    	        }
    	        for(k=i+8; (k/8<=7)&&((tabuleiro[k]=='.')||(k==posreiB)); k+=8){
    	            jogo[k]=1;
    	        }
    	        for(k=i-1; (k/8==i/8)&&((tabuleiro[k]=='.')||(k==posreiB)); k--){
    	            jogo[k]=1;
    	        }
    	        for(k=i-8; (k/8>=0)&&((tabuleiro[k]=='.')||(k==posreiB)); k-=8){
    	            jogo[k]=1;
    	        }
    	    }
    	    //movimentos bispo preto
    	    if(tabuleiro[i]=='b'){
    	        for(k=i+9; (k/8<=7)&&(k%8>0)&&((tabuleiro[k]=='.')||(k==posreiB));k+=9){
    	            jogo[k]=1;
    	        }
    	        for(k=i+7; (k/8<=7)&&((tabuleiro[k]=='.')||(k==posreiB)); k+=7){
    	            jogo[k]=1;
    	            if(k%8==0){
    	                break;
    	            }
    	        }
    	        for(k=i-9; (k/8>=0)&&((tabuleiro[k]=='.')||(k==posreiB));k-=9){
    	            jogo[k]=1;
	                if(k%8==0){
    	                break;
    	            }   
    	        }
	            for(k=i-7; (k/8>=0)&&(k%8>0)&&((tabuleiro[k]=='.')||(k==posreiB)); k-=7){
    	            jogo[k]=1;
    	        }
    	    }
    	    //movimentos rainha preta
    	    if(tabuleiro[i]=='q'){
    	        for(k=i+9; (k/8<=7)&&(k%8>0)&&((tabuleiro[k]=='.')||(k==posreiB));k+=9){
    	            jogo[k]=1;
    	        }
    	        for(k=i+7; (k/8<=7)&&((tabuleiro[k]=='.')||(k==posreiB)); k+=7){
    	            jogo[k]=1;  
    	            if(k%8==0){
    	                break;
    	            }
    	        }
    	        for(k=i-9; (k/8>=0)&&((tabuleiro[k]=='.')||(k==posreiB));k-=9){
    	            jogo[k]=1;
    	            if(k%8==0){
    	                break;
    	            }
    	        }
    	        for(k=i-7; (k/8>=0)&&(k%8>0)&&((tabuleiro[k]=='.')||(k==posreiB)); k-=7){
    	            jogo[k]=1;
    	        }
    	        for(k=i+1; (k/8==i/8)&&((tabuleiro[k]=='.')||(k==posreiB)); k++){
    	            jogo[k]=1;
    	        }
    	        for(k=i+8; (k/8<=7)&&((tabuleiro[k]=='.')||(k==posreiB)); k+=8){
    	            jogo[k]=1;
    	        }
    	        for(k=i-1; (k/8==i/8)&&((tabuleiro[k]=='.')||(k==posreiB)); k--){
    	            jogo[k]=1;
    	        }
    	        for(k=i-8; (k/8>=0)&&((tabuleiro[k]=='.')||(k==posreiB)); k-=8){
    	            jogo[k]=1;
    	        }
    	    }
    	    //movimentos cavalo preto
    	    if(tabuleiro[i]=='n'){
    	        k=i-6;
    	        if((k/8==(i/8)-1)&&(k%8==(i%8)+2)){
    	            jogo[k]=1;
    	        }
    	        k=i-10;
    	        if((k/8==(i/8)-1)&&(k%8==(i%8)-2)){
    	            jogo[k]=1;
    	        }
    	        k=i-15;
    	        if((k/8==(i/8)-2)&&(k%8==(i%8)+1)){
    	            jogo[k]=1;
    	        }
    	        k=i-17;
    	        if((k/8==(i/8)-2)&&(k%8==(i%8)-1)){
    	            jogo[k]=1;
    	        }
    	        k=i+6;
    	        if((k/8==(i/8)+1)&&(k%8==(i%8)-2)){
    	            jogo[k]=1;
    	        }
    	        k=i+10;
    	        if((k/8==(i/8)+1)&&(k%8==(i%8)+2)){
    	            jogo[k]=1;
    	        }
    	        k=i+15;
    	        if((k/8==(i/8)+2)&&(k%8==(i%8)-1)){
    	            jogo[k]=1;
    	        }
    	        k=i+17;
    	        if((k/8==(i/8)+2)&&(k%8==(i%8)+1)){
    	            jogo[k]=1;
    	        }
    	    }
    	    //movimentos peão branco
	        if(tabuleiro[i]=='P'){
    	        if(i%8==0){
    	            jogo[i-7]=2;
    	        }else if(i%8==7){
    	            jogo[i-9]=2;
    	        }else{
    	            jogo[i-9]=2;
    	            jogo[i-7]=2;
    	        }
    	    }
    	    //movimentos torre branca
    	    if(tabuleiro[i]=='R'){
    	        for(k=i+1; (k/8==i/8)&&((tabuleiro[k]=='.')||(k==posreiP)); k++){
    	            jogo[k]=2;  
    	        }
    	        for(k=i+8; (k/8<=7)&&((tabuleiro[k]=='.')||(k==posreiP)); k+=8){
    	            jogo[k]=2;
	            }
    	        for(k=i-1; (k/8==i/8)&&((tabuleiro[k]=='.')||(k==posreiP)); k--){
    	            jogo[k]=2;
    	        }
    	        for(k=i-8; (k/8>=0)&&((tabuleiro[k]=='.')||(k==posreiP)); k-=8){
	                jogo[k]=2;
    	        }
    	    }
    	    //movimentos bispo branco
    	    if(tabuleiro[i]=='B'){
    	        for(k=i+9; (k/8<=7)&&(k%8>0)&&((tabuleiro[k]=='.')||(k==posreiP));k+=9){
    	            jogo[k]=2;
    	        }
    	        for(k=i+7; (k/8<=7)&&((tabuleiro[k]=='.')||(k==posreiP)); k+=7){
    	            jogo[k]=2;
    	            if(k%8==0){
    	                break;
    	            }
	            }
    	        for(k=i-9; (k/8>=0)&&((tabuleiro[k]=='.')||(k==posreiP));k-=9){
    	            jogo[k]=2;
    	            if(k%8==0){
    	                break;
    	            }
    	        }
    	        for(k=i-7; (k/8>=0)&&(k%8>0)&&((tabuleiro[k]=='.')||(k==posreiP)); k-=7){
    	            jogo[k]=2;
    	        }
    	    }
    	    //movimentos da rainha branca
    	    if(tabuleiro[i]=='Q'){
    	        for(k=i+9; (k/8<=7)&&(k%8>0)&&((tabuleiro[k]=='.')||(k==posreiP));k+=9){
    	            jogo[k]=2;
    	        }
    	        for(k=i+7; (k/8<=7)&&((tabuleiro[k]=='.')||(k==posreiP)); k+=7){
    	            jogo[k]=2;
    	            if(k%8==0){
    	                break;
    	            }
    	        }
    	        for(k=i-9; (k/8>=0)&&((tabuleiro[k]=='.')||(k==posreiP));k-=9){
    	            jogo[k]=2;
    	            if(k%8==0){
    	                break;
    	            }
	            }
    	        for(k=i-7; (k/8>=0)&&(k%8>0)&&((tabuleiro[k]=='.')||(k==posreiP)); k-=7){
    	            jogo[k]=2;
    	        }
	            for(k=i+1; (k/8==i/8)&&((tabuleiro[k]=='.')||(k==posreiP)); k++){
	                jogo[k]=2;
	            }
    	        for(k=i+8; (k/8<=7)&&((tabuleiro[k]=='.')||(k==posreiP)); k+=8){
	                jogo[k]=2;
	            }
	            for(k=i-1; (k/8==i/8)&&((tabuleiro[k]=='.')||(k==posreiP)); k--){
	                jogo[k]=2;
	            }
	            for(k=i-8; (k/8>=0)&&((tabuleiro[k]=='.')||(k==posreiP)); k-=8){
	                jogo[k]=2;
	            }
	        }
	        //movimentos do cavalo branco
	        if(tabuleiro[i]=='N'){
	            k=i-6;
	            if((k/8==(i/8)-1)&&(k%8==(i%8)+2)){
    	            jogo[k]=2;
	            }
	            k=i-10;
	            if((k/8==(i/8)-1)&&(k%8==(i%8)-2)){
    	            jogo[k]=2;
	            }
	            k=i-15;
	            if((k/8==(i/8)-2)&&(k%8==(i%8)+1)){
	               jogo[k]=2;
	            }
    	        k=i-17;
	            if((k/8==(i/8)-2)&&(k%8==(i%8)-1)){
    	            jogo[k]=2;
	            }
    	        k=i+6;
    	        if((k/8==(i/8)+1)&&(k%8==(i%8)-2)){
    	            jogo[k]=2;
    	        }
    	        k=i+10;
    	        if((k/8==(i/8)+1)&&(k%8==(i%8)+2)){
    	            jogo[k]=2;
    	        }
    	        k=i+15;
    	        if((k/8==(i/8)+2)&&(k%8==(i%8)-1)){
    	            jogo[k]=2;
    	        }
    	        k=i+17;
    	        if((k/8==(i/8)+2)&&(k%8==(i%8)+1)){
    	            jogo[k]=2;
    	        }
    	    }
    	}
    	//rei preto em cheque
    	if(jogo[posreiP]==2){
    	    resultados[numJogos]=1;
    	//rei branco em cheque
    	}else if(jogo[posreiB]==1){
    	    resultados[numJogos]=2;
    	//nenhum rei em cheque
    	}else{
    	    resultados[numJogos]=0;
    	}
	}
	//impressão dos resultados
    for(i=1;i<numJogos;i++){
        printf("Jogo #%d: ", i);
        if(resultados[i]==1){
            printf("rei preto esta em cheque.\n");
        }
        if(resultados[i]==2){
            printf("rei branco esta em cheque.\n");
        }
        if(resultados[i]==0){
            printf("nenhum rei esta em cheque.\n");
        }
    }
	return 0;
}