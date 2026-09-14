/**
 * \file  velha.cpp
 */

 
#include "velha.hpp"

/** 
 * @brief verifica situacao do jogo da velha  
 * @author Programador 
 * @param  velha descreve o parametro
 * 
 *  Descrever o que a funcao faz
 */ 

int VerificaVelha( int velha[3][3] )
{
    int count_vazio = 0;
    int count_x = 0;
    int count_o = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (velha[i][j] == 0) count_vazio++;
            else if (velha[i][j] == 1) count_x++;
            else if (velha[i][j] == 2) count_o++;
            else return -2; // valor inválido
        }
    }

    if (count_vazio == 9) return -1;
    if (count_x > 5 || count_o > 5) return -2;

    return 0; // tabuleiro válido
}



