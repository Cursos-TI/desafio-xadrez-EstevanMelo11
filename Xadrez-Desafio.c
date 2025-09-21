#include <stdio.h>
 


//Desafio escolhido : Mestre



//Área de sistemas Voids :

    // Sistema recursivo da Torre ---------------------------------------------------------------------------------------------
void SistemaTorre(int Tor) {
    if (Tor > 0) {
        SistemaTorre(Tor - 1);  // Chama seu sistema mesmo e aplica uma subtração de menos 1.
        printf("%d - Direita.\n", Tor);  // Imprime a direção da peça.
    }
}

    // Sistema recursivo da Bispo ---------------------------------------------------------------------------------------------
void SistemaBispo(int Bis) {
    if (Bis > 0) {
        SistemaBispo(Bis - 1);  // Chama seu sistema mesmo e aplica uma subtração de menos 1.
        printf("%d - Direita", Bis); // Imprime a direção da peça.

            for(int b = 1; b > 0; b--){ //Esse sistema está programado para acontecer apenas uma repetição por vez.
                printf(", Cima.\n");
            }   
    }
}

    // Sistema recursivo da Rainha ---------------------------------------------------------------------------------------------
void SistemaRainha(int Rai) {
    if (Rai > 0) {
        SistemaRainha(Rai - 1);  // Chama seu sistema mesmo e aplica uma subtração de menos 1.
        printf("%d - Esquerda.\n", Rai);  // Imprime a direção da peça.
    }
}

    // Sistema recursivo da Cavalo ---------------------------------------------------------------------------------------------
void SistemaCavalo(int Cav1) {
    if (Cav1 > 0) {

        SistemaCavalo(Cav1 - 1);  // Chama seu sistema mesmo e aplica uma subtração de menos 1.

            for(int Cav2 = 1; Cav2 < 3; Cav2++){ //Esse sistema esta programado para efetuar duas repetições por vez.
                printf("%d - Cima.\n", Cav2);
            }

        printf("%d - Direita.\n", Cav1);  // Imprime a direção da peça.
    }
}
    // --------------------------------------------------------------------------------------------------------------------------







//Área de sistema principal : 
int main() {
    
    //O termo Mov refere-se à "Movimentação" das peças.
    int MovTorre = 5;
    int MovBispo = 5;
    int MovRainha = 8;
    int MovCavalo = 1;

    //A Torre moverá-se para a direita : 
    printf(" - - - Torre : \n");
    SistemaTorre(MovTorre); //Chama função void
    printf("\n"); //Apenas para pular linha

    //A Bispo moverá-se para a diagonal (direita e cima) :
    printf(" - - - Bispo : \n");
    SistemaBispo(MovBispo); 
    printf("\n");

    //A Rainha moverá-se para a esquerda : 
    printf(" - - - Rainha : \n");
    SistemaRainha(MovRainha); 
    printf("\n");

    //A Cavalo moverá-se para cima duas vezes, e uma vez para direita : 
    printf(" - - - Cavalo : \n");
    SistemaCavalo(MovCavalo); 
    printf("\n");



    return 0;

}