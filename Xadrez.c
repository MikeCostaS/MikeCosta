#include <stdio.h>

int main(){

    char cavalo = 0;
    char movimentoLateral = 0;
    //VARIAVEL TORRE DEFINIDA
    int torre, rainha = 0, bispo = 0;
    //Mover a torre 5 casas para a direita
    for ( torre = 0; torre < 5; torre++)
    {
        printf("Direita\n");// imprime a direcao do movimento
    }
    
    //mover a rainha 8 casas
while (rainha < 8)
{
    printf("Esqueda\n");// imprime o movimento da rainha
     rainha++;
}
   
do//movimenta o bispo
{   printf("Cima, Direita\n");
    bispo++;
    
} while (bispo < 5);// imprime a direcao do movimento
 
//movimentação do cavalo com loop aninhado
for(cavalo = 0; cavalo < 2; cavalo++ )
{
    printf("Baixo, baixo\n");

    for (movimentoLateral = 0; movimentoLateral < 1; movimentoLateral++)
    {
        printf("Esquerda\n");
    }
    
    return 0;
}



}
