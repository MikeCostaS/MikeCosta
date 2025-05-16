#include <stdio.h>

void moverTorre(int casas){
    if(casas > 0)
    {   printf("Direita \n");
        moverTorre(casas - 1);
    }
}
    
void moverRainha(int movimentoRainha){
    
    if (movimentoRainha > 0)
    {
        printf("Esquerda \n");
        moverRainha(movimentoRainha - 1);
    }
}
    
int main(){

    //Mover a torre 5 casas para a direita
    printf("Movimento Torre: \n");
    moverTorre(5);
    
    //mover a rainha 8 casas para esquerda
    printf(" \n");
    printf("Movimento Rainha: \n");
    moverRainha(8);

   //movimenta o bispo 5 casas para direita cima
for(int bispo = 0;bispo < 1; bispo++){
    printf(" \n");
    printf("Movimento Bispo: \n");
    printf("Cima\n");
    printf("Cima\n");
    printf("Cima\n");
    printf("Cima\n");
    printf("Cima\n");
    for(int movimentoBispo = 0; movimentoBispo < 5; movimentoBispo++){
        printf("Direita \n");
    }
    
} 

//movimentação do cavalo com loop aninhado mover para cima e direita
for(int cavalo = 0, movimentoCav = 1; cavalo < movimentoCav ; cavalo++ )
    printf(" \n");
{   printf("Movimento Cavalo: \n");
    printf("Cima\n");
    printf("Cima\n");    

    for (int movimentoLateral = 0; movimentoLateral < 1; movimentoLateral++)
    {
        printf("Esquerda\n");
    }
    
    return 0;
}



}
